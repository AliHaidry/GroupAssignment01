#ifndef REQUIRED_MEMORY_H
#define REQUIRED_MEMORY_H

#include <iostream>
#include <string>

using namespace std;

class RequiredMemory {

   public:
      void messageHello() const; // function prototype -> display's greeting message.
      double valueE(double prime); // function prototype -> to evaluate natural logarithm base - e.
      double reqMemory(double prime); // function prototype -> to calcuate the required memory in MB.

   private:
      /*
      * No private data member or fields
      */
};

#endif
