#include <iostream>
#include <cstring>
#include <cstdlib>
#include "primalityChecker.h"



ll PrimalityValidator::modulo(ll base, ll exponent, ll mod)
{
   ll x = 1;
   ll y = base;
   while (exponent > 0)
   {
      if (exponent % 2 == 1)
      {
         x = (x * y) % mod;
      }
      y = (y * y) % mod;
      exponent = exponent / 2;
   }
   return x % mod;
}


/*
*The Fermat primality test is a primality test, giving a way to test if a number is a prime number,
*Fermat's test for checking primality
*/

/*
* If a given number is prime, then this method always returns true. 
* If given number is composite (or non-prime), then it may return true or false, 
* but the probability of producing incorrect result for composite is low and can be reduced by doing more 
* iterations.
*/

bool PrimalityValidator::Fermat(ll prime, int iterations)
{
   if (prime == 1)
   {
      return false; 
   }
   for (int counter = 0; counter < iterations; counter++)
   {
      ll a = rand() % (prime - 1) + 1;
      if (modulo(a, prime - 1, prime) != 1)
      {
         return false; // indicates not prime number
      }
   }
   return true; // indicates is prime number
}