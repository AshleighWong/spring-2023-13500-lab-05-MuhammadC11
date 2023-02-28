#include <iostream>
#include "funcs.h"

// add functions here

bool isDivisibleBy(int n, int d)
{
    if (n % d == 0) // if there is no remainder, then it is divisible
    {
        return true; // if it is divisible, then return true
    }
    else
    {
        return false; // if it is not divisible, then return false
    }
}

bool isPrime(int n)
{

    if (n < 2) // if the number is less than 2 then it is not prime
    {
        return false; // if it is not prime, then return false
    }
    else
    {
        for (int i = 2; i < n; i++) // loop through all numbers from 2 to n
        {
            if (n % i == 0) // if there is no remainder, then it is not prime
            {
                return false; // if it is not prime, then return false
            }
        }
        return true; // if it is prime, then return true
    }
}

int nextPrime(int n)
{
    int newPrime; // need this because the parameter is only value parameter and not a reference parameter so we need a new variable we can return
    newPrime = n + 1;
    // first add 1 to n then check if it is a prime, if it not, then add 1 again and try finding out if its prime again

    while (isPrime(newPrime) == false) // while the newPrime is not prime, keep adding 1 to it
    {
        newPrime++;
    }
    return newPrime; // once it is prime, return the newPrime
}

int countPrimes(int a, int b)
{
    int currentNum = a;
    // start checking if a is a prime, if it is, then add one to the primeCounter, then add 1 to currentNum until it gets to b, stop at b, then return the primeCounter
    int primeCounter = 0;
    while (currentNum <= b)
    {
        if (isPrime(currentNum) == true)
        {
            primeCounter++;
            currentNum++;
        }
        else
        {
            currentNum++;
        }
    }

    return primeCounter;
}

bool isTwinPrime(int n)
{
    if ((isPrime(n) && isPrime(n + 2)) || (isPrime(n) && isPrime(n - 2)))
    {
        return true;
    }
    else
    {
        return false;
    }
}

int nextTwinPrime(int n)
{
    int currentNum = n;
    bool nextFound = false;
    currentNum++;
    while (nextFound == false)
    {
        if (isTwinPrime(currentNum) == true)
        {
            return currentNum;
            nextFound = true;
        }
        else
        {
            currentNum++;
        }
    }
    return 0;
}

int largestTwinPrime(int a, int b)
{
    int currentNum = b;
    bool nextFound = false;
    while (nextFound == false)
    {
        if (isTwinPrime(currentNum) == true)
        {
            return currentNum;
            nextFound = true;
        }
        else if (currentNum == a)
        {
            return -1;
            nextFound = true;
        }
        else
        {
            currentNum--;
        }
    }
    return 0;
}