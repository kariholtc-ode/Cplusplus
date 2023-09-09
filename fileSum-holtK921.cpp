//------------------------------------------------------------------
// File name:  fileSum.cpp
// Author:
//
// YOUR JOB: Complete the body of the main.
//
// Function: Calculate the sum of the integer values in file 'mydata'.
//
//    NOTE:  The data in file mydata is terminated by the sentinel -9999,
//           which is NOT DATA, but a marker that all data have been read.
//
//------------------------------------------------------------------
#include <iostream>
#include <fstream>
using namespace std;
//------------------------------------------------------------------
// Function: Create a data file with a random number of values.
//           Values are terminated with sentinel value -9999.
//
//   DO NOT TOUCH THIS FUNCTION!!!
//------------------------------------------------------------------
void GenFile(string fname, int n)
{
   int T[20]={1,7,2,8,4,2,8,9,15,-10,-5,3,6,0,2};
   ofstream dF(fname.c_str());
   n = (n * n) % 17;
   for (int k=0; k<n; k++)
      dF << (1+T[k]%5) * (T[k]%6) << endl;
   dF << -9999 << endl; dF.close();
}

int main()
{
   cout << "\n\n(c) 2023, holtK921\n\n";  //******** FIX THIS **

   //-| ----------------------------------------------------------------------
   //-| File generation: DO NOT MOVE, DELETE OR MODIFY.
   //-| ----------------------------------------------------------------------
   int anyNum;
   cout << "\nEnter any whole number: "; cin >> anyNum;
   GenFile("mydata", anyNum);
   cout << "\nFILE mydata has been created ...\n";


   //-|************************************************************************
   //-| Your work goes BELOW.
   //-|************************************************************************
   int num;    // Input value from file.
   int Sum;    // Accumulator: sum of values read from file.

   
   ifstream file("mydata");
   file >> num;

   while (num != -9999) {
       Sum += num;
       file >> num;
   }

   cout << "\nSUM = " << Sum << endl; return 0; // DO NOT MOVE, MODIFY or DELETE.
}//main

