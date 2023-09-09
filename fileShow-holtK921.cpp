//------------------------------------------------------------------
// File name:  fileShow.cpp
// Author:
//
// YOUR JOB: Complete the body of the main.
//
// Function: Read a count (N) from keyboard;
//           Open file 'myInfo';
//           Read N values from the file, displaying the values
//           on ONE LINE;
//              ========
//
// Example:  input: 3   ==> output:  8 2 9 DONE
//           input: 0   ==> output:  DONE
//------------------------------------------------------------------
#include <iostream>
#include <fstream>
using namespace std;
//------------------------------------------------------------------
// Function: Create data file 'myInfo' with 20 number of values.
//
//   DO NOT TOUCH THIS FUNCTION!!!
//------------------------------------------------------------------
void GenFile()
{
   int T[]={1,7,2,8,4,2,8,9,15,-10,-5,3,6,0,2,2,8,4,2,8,23,8};
   ofstream dF("myInfo");
   for (int k=0; k<20; k++)
      dF << T[k]+T[k+1] << ' ' ;
   dF << -9999 << endl; dF.close();
}

int main()
{
    int num, val;

   //-| ----------------------------------------------------------------------
   //-| File generation: DO NOT TOUCH!
   //-| ----------------------------------------------------------------------
   GenFile();
   cout << "\nFILE myInfo has been created ...\n";

   //-|------------------------------------------------------------
   //-| Display copyright.
   //-|------------------------------------------------------------
   cout << "\n\n(c) 2023, holtK921 Kari Holt\n\n";
   //-|************************************************************************
   //-| Your work goes BELOW.
   //-|************************************************************************
    ifstream file("myInfo");
   cout << "Enter #values to read: ";
   cin >> num; 

   cout << "Output: ";

    for (int i = 0; i < num; i++) {
        file >> val;
        if (val == -9999) {
            break;
        }
        cout << val << " ";
    }



   cout << " DONE" << endl; return 0; // DO NOT TOUCH.
}//main

