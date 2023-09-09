//------------------------------------------------------------------
// File name:  student.cpp
// Author:
// Function: Complete the following program to read credit hours earned from
//           the keyboard, and to print out the student's classification:
//
//                < 0  hours:  NOT_A_STUDENT
//                0-30 hours:  FRESHMAN
//               31-60 hours:  SOPHOMORE
//             over 60 hours:  UPPERCLASSMAN
//
//
// --------------------------------------------------------------------
#include <iostream>
using namespace std;
int main()
{
   cout << "\n\n(c) 2023, holtK921 Kari Holt\n\n";  //******** FIX THIS **

   int hours;

   cout << "Enter credit hours: ";
   cin >> hours;

   if (hours >= 0 && hours <=30)
      cout << "FRESHMAN";
   else if (hours >= 31 && hours < 61)
      cout << "SOPHOMORE";
   else if (hours >= 61)
      cout << "UPPERCLASSMAN";
   else 
      cout << "NOT_A_STUDENT";


   cout << endl; return 0; // DO NOT DELETE.
}
