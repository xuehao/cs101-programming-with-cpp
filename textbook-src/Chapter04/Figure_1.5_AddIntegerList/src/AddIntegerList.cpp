/*
 * File: AddIntegerList.cpp
 * ------------------------
 * This program adds a list of integers. The end of the
 * input is indicated by entering a sentinel value, which
 * is defined by setting the value of the constant SENTINEL.
 */

#include <iostream>
#include "console.h"
#include "filelib.h"
using namespace std;

/* Main program */
int main() {
    ifstream infile;
    promptUserForFile(infile, "Input file(e.g. data.txt): ");
    int total = 0;
    while (true) {
        // int value;
        // infile >> value;
        // if (infile.fail()) break;
        // total += value;
        string line;
        getline(infile, line);
        if (infile.fail())
            break;
        total += stringToInteger(line);
    }
    if (!infile.eof()) {
        error("Data error in file");
    }
    infile.close();
    cout << "The sum is " << total << endl;
    return 0;
}
