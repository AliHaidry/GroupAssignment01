#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <fstream> // for file library
#include <iomanip> // for input / output manipulators it works for 'iostream' and 'fstream'.

#include "requiredMemory.h";
#include "primeFactors.h";
#include "primalityChecker.h";



using namespace std;

int main()
{
   PrimalityValidator myprimalityValidator; // creates the object 'myprimalityValidator '. 
   PrimeFactorValidator myprimefactorvalidator; // creates the object 'myprimefactorvalidator'.
   RequiredMemory rMemoryOne; // creates the object 'rMemoryOne'.
   rMemoryOne.messageHello();
   cout << endl;


   std::cout << "Enter the value of prime number to calculate its natural log: \n";
   int prime = 0;
   std::cout << endl;
   std::cin >> prime;

   std::cout << "\n";
   std::cout << "The logarithm value(base-e) of " << prime << " is " << rMemoryOne.valueE(prime) << endl;
   std::cout << "\n";

   rMemoryOne.reqMemory(prime);
   std::cout << endl;

   std::cout << "***************Prime Factor Validator*********************\n" << endl;

   int n;
   cout << "Enter the number for finding its prime factors: " << endl;
   cin >> n;
   std::cout << "\n";
   cout << "Prime factors of " << n << " are :\t";
   std::cout << endl;
   myprimefactorvalidator.printPrimeFactors(n);
   std::cout << endl;
   std::cout << "\n";

   std::cout << "**************Primality Validator************************\n" << endl;

   ofstream primeFile;
   ofstream notPrimeFile;
   int primeInputNum;
   int notPrimeInputNum;

   int iteration = 50; 
   ll num;

   primeFile.open("primeFile.txt"); // write data to the file.
   notPrimeFile.open("notPrimeFile.txt"); // write data to the file.

   for (int counter = 0; counter < 50; counter++)
   {
      cout << "Enter integer > 3 to test primality: ";
      std::cout << "\n";
      cout << endl;
      cin >> num;
     
      std::cout << "\n";
      if (myprimalityValidator.Fermat(num, iteration))
      {
         cout << num << " is prime" << endl;
         primeFile << num << setw(6) << " is Prime " << endl;
       
      }
      else
      {
         cout << num << " is not prime" << endl;
         notPrimeFile << num << setw(6) << " is not Prime " << endl;
      }
   }

   primeFile.close();
   notPrimeFile.close();


   cout << "Hello C++" << endl;

   system("PAUSE");
   return 0;
}