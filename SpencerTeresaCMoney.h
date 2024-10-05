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

    double getValue() const;
    Money percent(int percentFigure) const;

    friend istream& operator >> (istream& ins, Money& amount);
    friend ostream& operator << (ostream& outs, const Money& amount);
    
private:
    long allCents;
};

int digitToInt(char c);