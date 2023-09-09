//--------------------------------------------------------------------------------
// File name:   myGPA.cpp
// Assign ID:   PROG3
// Due Date:    June 3rd, 2023
//
// Purpose:     Create a GPA calculator that will read grade and name 
//              inputs and display the correct data
//
// Author:      holtK921 Kari Holt
//
//--------------------------------------------------------------------------------

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
   //-|---------------------------------------------------------------------------
   //-| 0. Declare variables
   //-|---------------------------------------------------------------------------             .
   long studentID;         // Student's ID number.
   float GPA,              // Student's GPA
         courseTotal,      // Final # of courses taken.
         hoursTotal,       // Final # of hours taken.
         aN,               // # of classes the student received an A.
         bN,               // # of classes the student received a B.
         cN,               // # of classes the student received a C.
         dN,               // # of classes the student received a D.
         fN;               // # of classes the student received a F.
    string name1,
           name2;          // Student's Full Name.

   //-|---------------------------------------------------------------------------
   //-| Print the copyright notice, to screen.
   //-|---------------------------------------------------------------------------
   cout << endl << "(c) 2023, holtK921 Kari Holt" << endl << endl; 

   //-|---------------------------------------------------------------------------
   //-| 1. Read the input of As, Bs, Cs, Ds, Fs, ID, and full name.
   //-|---------------------------------------------------------------------------
   cout << "\nEnter #As #Bs #Cs #Ds #Fs ID FullName: ";
   cin >> aN >> bN >> cN >> dN >> fN >> studentID >> name1 >> name2;
   
   //-|---------------------------------------------------------------------------
   //-| 2. Calculate the GPA, total numbers of courses and hours taken.
   //-|---------------------------------------------------------------------------
   courseTotal = aN + bN + cN + dN + fN;
   
   GPA = (aN * 4.0 + bN * 3.0 + cN * 2.0 + dN * 1.0 + fN * 0.0) / courseTotal;
    
   hoursTotal =  3 * courseTotal;

   //-|---------------------------------------------------------------------------
   //-| 3. Print the student's full name, ID, total number of each grade, and GPA
   //-|---------------------------------------------------------------------------
   cout << endl;
   cout << "      ===========================================" << endl;
   cout << "      STUDENT ID:   " << studentID << endl;
   cout << "      STUDENT NAME: " << name1 <<" " << name2 << endl;
   
   cout << "\n      LETTER GRADE:  A -> " << aN << endl;
   cout << "                     B -> " << bN << endl;
   cout << "                     C -> " << cN << endl;
   cout << "                     D -> " << dN << endl;
   cout << "                     F -> " << fN << endl;

   cout << "\n      " << courseTotal << " COURSES TAKEN" << endl;
   cout << "      " << hoursTotal << " HOURS TAKEN" << endl;
   cout << showpoint << fixed << setprecision(2);
   cout << "      STUDENT GPA = " << showpoint << GPA << endl;
   cout << "      ===========================================" << endl;

   //-|--------------------------------------------------------------------------
   //-| 4. Print out the final copyright. 
   //-|--------------------------------------------------------------------------
   cout << endl << endl << "(c) 2023, holtK921 Kari Holt" << endl; 

   return 0;

}//main
