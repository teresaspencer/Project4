// Author: Teresa Spencer
// Date: October 4th, 2024
// Description: This is a program to test overloaded operators in the Money class
// and member function to return a given percent of a Money object
// It uses separate files for an application, implementation, and interface

#include "SpencerTeresaCMoney.h"

int main() {
    // Creating Money objects to test overloaded operators
    Money money1(12, 34);
    Money money2(56, 78);
    Money money3(12, 34);

    // Testing overloaded < operator
    cout << "First we will compare money1 and money2 using the overloaded < operator" << endl;
    if (money1 < money2)
        cout << money1 << " is less than " << money2 << endl;
    else 
        cout << money1 << " is not less than " << money2 << endl;

    // Testing overloaded <= operator
    cout << "Next we will compare money2 and money3 using the overloaded <= operator" << endl;
    if (money2 <= money3)
        cout << money2 << " is less than or equal to " << money3 << endl;
    else 
        cout << money2 << " is not less than or equal to " << money3 << endl;

    // Testing overloaded > operator
    cout << "Next we will compare money1 and money2 using the overloaded > operator" << endl;
    if (money1 > money2)
        cout << money1 << " is greater than " << money2 << endl;
    else 
        cout << money1 << " is not greater than " << money2 << endl;

    // Testing overloaded >= operator
    cout << "Next we will compare money1 and money3 using the overloaded >= operator"
        << endl;
    if (money1 >= money3)
        cout << money1 << " is greater than or equal to " << money3 << endl;
    else 
        cout << money1 << " is not greater than or equal to " << money3 << endl;

    // Creating new Money object to test member function percent
    Money purse(500);

    // Testing percent function
    cout << "We will now test the percent function" << endl;
    cout << "The purse holds " << purse << endl;
    cout << "10\% of the contents of the purse is " << purse.percent(10) << endl;

    return 0;
}

/*
****************************** Output ******************************
First we will compare money1 and money2 using the overloaded < operator
$12.34 is less than $56.78
Next we will compare money2 and money3 using the overloaded <= operator
$56.78 is not less than or equal to $12.34
Next we will compare money1 and money2 using the overloaded > operator
$12.34 is not greater than $56.78
Next we will compare money1 and money3 using the overloaded >= operator
$12.34 is greater than or equal to $12.34
The purse holds $500.00
10% of the contents of the purse is $50.00
*/