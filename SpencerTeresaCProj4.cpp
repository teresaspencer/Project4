#include "SpencerTeresaCMoney.h"

int main() {
    Money amount;
    ifstream inStream;
    ofstream outStream;

    inStream.open("infile.dat");
    if (inStream.fail()) {
        cout << "Input file opening failed.\n";
        exit(1);
    }

    outStream.open("outfile.dat");
    if (outStream.fail()) {
        cout << "Output file opening failed.\n";
        exit(1);
    }

    inStream >> amount;
    outStream << amount << " copied from the file infile.dat.\n";
    cout << amount << " copied from the file infile.dat.\n";

    inStream.close();
    outStream.close();

    return 0;
}