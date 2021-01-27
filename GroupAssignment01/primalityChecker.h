#ifndef PRIMALITY_CHECKER_H
#define PRIMALITY_CHECKER_H

#include <iostream>
#define ll long long

using namespace std;

class PrimalityValidator
{
   public:
      ll modulo(ll base, ll exponent, ll mod);
      bool Fermat(ll prime, int iterations);

   private:
      /*
    * No private data member or fields
    */
};


#endif 
