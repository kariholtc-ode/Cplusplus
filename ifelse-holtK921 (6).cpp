//------------------------------------------------------------------
// File name:  ifelse.cpp
// Author:
// Function: Complete the following program to read two integer values.
//           If the first number is bigger than 17 and the second
//           is less than 3, display the word OKAY. Otherwise, 
//           if the first is not equal to zero, display NOT.
//
// WARNING: DO NOT ISSUE PROMPTS or LABEL OUTPUT.
// --------------------------------------------------------------------

#include <iostream>
using namespace std;
int main()
{  
	// Declare variables
    int num1, num2;

	//-| Display copyright.
   cout << "\n\n(c) 2023, holtK921 Kari Holt\n\n";
   //-| Code to perform required operations.
  cout << "Enter 2 whole numbers: ";
  cin >> num1 >> num2;

  if (num1 > 17 && num2 < 3)
    cout << "OKAY";
  else if (num1!=0)
    cout << "NOT";
  else
    cout << num1 + num2;
    

   cout << " DONE" << endl; // DO NOT TOUCH.
	return 0;
}
