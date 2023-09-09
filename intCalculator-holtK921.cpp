#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;
#include "intCalculator_functions.h"

//------------------------------------------------------------------
// File name:   intCalculator_functions.h
// Assign ID:   PROG8a
// Due Date:    8/3/23 at 11:30pm 
//
// Purpose:     Implement integer calculator using do-while loop, functions..
//
// Author:      holtK921 Kari Holt
//------------------------------------------------------------------

//****************************************************************
// **** FUNCTIONS used by main program. 
// YOUR JOB: Create a BODY for each function.
//  ** WARNING #1: Do NOT CHANGE the function parameters!
//  ***WARNING #2: Implement ONE FUNCTION AT A TIME!! Write+compile+run.
//****************************************************************

//----------------------------------------------------------------
// Function: Display copyright, given year, courseID and full name.
//----------------------------------------------------------------
void Display_Copyright(string Name, string courseID, int year)
{
   cout << endl << endl << "(c) " << year << "," << " " <<
  courseID << " " << Name << " " << endl << endl;
}


//----------------------------------------------------------------
// Function: Display Calculator Menu and prompt for menu choice.
//           MUST MATCH menu from key-intCalculator.crun
//----------------------------------------------------------------
void Show_Menu()
{
   cout << "   +========================+" << endl;
   cout << "   | INTEGER CALCULATOR     |" << endl;
   cout << "   +========================+" << endl;
   cout << "   |                        |" << endl;
   cout << "   |   + Add                |" << endl;
   cout << "   |   - Subtract           |" << endl;
   cout << "   |   * Multiply           |" << endl;
   cout << "   |   / Divide             |" << endl;
   cout << "   |   % Remainder          |" << endl;
   cout << "   |   Q Quit/terminate     |" << endl;
   cout << "   |                        |" << endl;
   cout << "   +========================+" << endl;
   cout << "\n   Enter Menu Choice: " << endl;
}


//----------------------------------------------------------------
// Read menu choice from keyboard.
//----------------------------------------------------------------
char MenuChoice(char choice)
{
   cin >> choice;

   return choice;
}


//----------------------------------------------------------------
// Read operands from keyboard.
//----------------------------------------------------------------
void Read_Operands(string Prompt, int & left, int & right)
{
   cout << Prompt << endl;
   cin >> left >> right;
}


//----------------------------------------------------------------
// Output labeled value.
//----------------------------------------------------------------
void DisplayLV(string Label, int value)
{
   cout << Label << value;
}

void DisplayVL(ostream & oF, int value, string Label)
{
   oF << value << " " << Label;
}

void DisplayLV(ostream & S, string Label, int value)
{
   cout << 
}

void Display_BadChoice_Message(char choice)
{
   cout << "BAD MENU CHOICE (" << choice << ") ... Retry" << endl;
}


//----------------------------------------------------------------
// Arithmetic Functions.
//----------------------------------------------------------------
int Sum(int x, int b)
{
   return x + b;
}

int Quotient(int divisor, int dividend)
{
   if (dividend == 0)
      return 0;
   else
      return divisor/dividend;
}

void Remainder(int dividend, int & r, int divisor)
{
   
}

void Product( int & p, int a, int b)
{
   
}

int Diff( int m, int n)
{
   return m - n;
}

//----------------------------------------------------------------
// Output result of operation.
//----------------------------------------------------------------
void Output_Result(ostream & outF, int L, char op, int R, int result)
{
   outF << L << op << R << " = " << result;

}

//----------------------------------------------------------------
// Log (record) the requested calculation.
//----------------------------------------------------------------
void Log_Request(ostream & recF, char op, int left, int right)
{
   recF << op << " " << left << " " << right << endl;
}

int main()
{
   char menuChoice ='Q';          // Choice entered by user.
   int  addcount,                 // Add count.
        divcount,                 // Division count.
        remcount,                 // Remainder count.
        mulcount,                 // Multiply count.
        subcount,                 // Subtraction count.
        badcount,                 // Bad Choice Count.
        count,                    // Number of Choices Made.
        left,
        right,
        ans;
   //-|---------------------------------------------------------------
   //-| 1. Display copyright.
   //-|---------------------------------------------------------------
   Display_Copyright("Kari Holt", "holtK921", 2023);
   cout << endl;

   //-|---------------------------------------------------------------
   //-| 2. Initialize counters. 
   //-|---------------------------------------------------------------
   addcount = 0;
   subcount = 0;
   mulcount = 0;
   divcount = 0;
   remcount = 0;
   count = 0;

   //-|------------------------------------------------------------------
   //-| 3. Repeat the following (do-while):
   //-|    3.1 Display menu.
   //-|    3.2 Read menu choice.
   //-|    3.3 Perform menu choice.
   //-|        a) Count choice.
   //-|        b) Read operands (only for valid choices).
   //-|        c) Log the request
   //-|        d) Perform the calculation.
   //-|        e) Display the result.
   //-|    3.4 Log the request
   //-| UNTIL menu choice 'Q' is selected.
   //-|------------------------------------------------------------------
   do
   {
       Show_Menu();
       menuChoice = MenuChoice();

       switch(menuChoice)
       {
       case '+': 
         addcount++;
         cout << "A: Enter left and right operands: " << endl;
         Read_Operands(left,right);
         ans = Sum(left,right);
         Output_Result(left,menuChoice,right,ans);

       default:  cout << "\nBAD MENU CHOICE ... Retry\n";
               badcount++;
            break;

       }//switch

   }
   while ( menuChoice != 'Q');

 
   //-|--------------------------------------------------------------------
   //-| 4. Display session summaries (counts):
   //-|    a) Number of bad menu choices [ xx BAD MENU CHOICES]
   //-|    b) Number of adds:       [ + COUNT = xx ]
   //-|    c) Number of subtracts:  [ - COUNT = xx ]
   //-|    d) Number of multiplies: [ * COUNT = xx ]
   //-|    e) Number of divisions:  [ / COUNT = xx ]
   //-|    f) Number of remainders: [ % COUNT = xx ]
   //-|--------------------------------------------------------------------



   //-|---------------------------------------------------------------
   //-| Display copyright.
   //-|---------------------------------------------------------------


   return 0;
}//main
