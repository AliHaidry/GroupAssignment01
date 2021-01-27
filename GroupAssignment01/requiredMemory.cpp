#include <iostream>
#include <math.h>
#include "requiredMemory.h"

using namespace std;

void RequiredMemory::messageHello() const
{
   cout << "***Group Assignment 01 - Submitted by*** \n";
   cout << "\tSyed Muhammad Ali Haidry" << endl;
   cout << "\tGbenga Ikuomenisan" << endl;
   cout << "\tSangeeta Sharma" << endl;
   cout << endl;
  
   cout << "*********Largest Know Prime Number digits are 24,862,048*********\n";

}

double RequiredMemory::valueE(double prime)
{
   return log(prime);
}

double RequiredMemory::reqMemory(double prime)
{

   int largestPrimeNum = 0;
   std::cout << "Enter the same value of prime as of calculating the natural log ! : \n";
   std::cin >> largestPrimeNum;
   std::cout << endl;
   int convertMB = 8000000;
   double PC = largestPrimeNum / valueE(prime);
   int bits = 24;
   float primeRange = bits * PC;
   float requiredMemory = primeRange / convertMB;


   std::cout << "\n";
   std::cout << "The required memory is : " << requiredMemory << " MB" << endl;

   return 0;
}