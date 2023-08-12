#include <iostream>

using namespace std;

//Program Name: AddTwoIntegers.cpp
//Date: 8/12/2023
//Developed by Hutson Horton

int main()
{
    //Introduce the program to the user.

    cout << "This program will ask for two integers and then perform multiple calculations with them. \n\n" << endl;

    //Initialize Variables

    int num1 = 0 ;
    int num2 = 0;
    int theSum = 0;
    int theProduct = 0;
    int theQuotient = 0;
    int theDifference = 0;

    //Acquire Integers
        cout << "Please provide the first integer.\n";
        cin >> num1;
        cout << "Please provide the second integer.\n";
        cin >> num2;

    //Do the Math
        theSum = num1 + num2;
        theProduct = num1 * num2;
        theQuotient = num1 / num2;
        theDifference = num1 - num2;

    //Output to User
        cout << "\nThe sum of " << num1 << " and " << num2 << " is " << theSum << "! ";
        cout << "\nThe product of " << num1 << " and " << num2 << " is " << theProduct << "! ";
        cout << "\nThe difference between " << num1 << " and " << num2 << " is " << theDifference << "! ";
        cout << "\nThe quotient of " << num1 << " and " << num2 << " is " << theQuotient << "! ";



    return 0;
}
