// ------------------------------------------------------------------
// File name:  big4.cpp
// Author:
//
// YOUR JOB: Complete the body of the function Max2.
//
// NOTE: The main program calls the function to calculate the
//       max of four values.
//
// WARNING:   DO NOT PROMPT FOR INPUT.
// ------------------------------------------------------------------
#include <iostream>
using namespace std;

// FUNCTION Max2: Compute the maximum of two integer values.
int Max2( int x, int y)
{
   if (x>y)
      return x;
   else
      return y;
}//Max2

                  //===================================
                  // DO NOT TOUCH THE MAIN!!
                  //===================================
int main()
{
   //-| Display copyright.
   
   int num1, num2, num3, num4;

   cout << "\n\n(c) 2023, holtK921 Kari Holt\n\n";
   
   cout << endl << "Enter 4 whole numbers: ";
   cin >> num1 >> num2 >> num3 >> num4;

   cout << "BIGGEST = " << Max2( Max2(num1,num3), Max2(num2, num4) );

   cout << endl; return 0; // DO NOT TOUCH.
}

