// Author: Teresa Spencer
// Date: October 4th, 2024
// Description: This is a program to test overloaded operators in the Money class
// and member function to return a given percent of a Money object
// It uses separate files for an application, implementation, and interface

#include <iostream>
#include <fstream>

using namespace std;

class Money {
public:
    // Overloaded arithmetic and comparison operators
    friend Money operator +(const Money& amount1, const Money& amount2);
    friend Money operator -(const Money& amount1, const Money& amount2);
    friend Money operator -(const Money& amount);

    friend bool operator ==(const Money& amount1, const Money& amount2);
    friend bool operator < (const Money& amount1, const Money& amount2);
    friend bool operator <=(const Money& amount1, const Money& amount2);
    friend bool operator > (const Money& amount1, const Money& amount2);
    friend bool operator >=(const Money& amount1, const Money& amount2);

    // Constructors
    Money(long dollars, int cents);
    Money(long dollars);
    Money();

    // Getters
    double getValue() const;
    Money percent(int percentFigure) const;

    // Overloaded insertion and extraction operators
    friend istream& operator >> (istream& ins, Money& amount);
    friend ostream& operator << (ostream& outs, const Money& amount);
    
private:
    long allCents;
};

int digitToInt(char c);