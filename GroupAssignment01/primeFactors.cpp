#include <iostream>
#include "primeFactors.h"


using namespace std;


void PrimeFactorValidator::printPrimeFactors(int num) 
{
   while (num % 2 == 0) {
      cout << "2\t";
      num = num / 2;
   }
   for (int counter = 3; counter <= sqrt(num); counter = counter + 2) {
      while (num % counter == 0) {
         cout << counter << "\t";
         num = num / counter;
      }
   }
   if (num > 2)
      cout << num << "\t";
}
