/*
 * File: Combinations.cpp
 * ----------------------
 * This program computes the mathematical function C(n, k) from
 * its mathematical definition in terms of factorials.
 */

#include <iostream>
#include "console.h"
#include "simpio.h"
#include "unittest.h"
using namespace std;

/* Function prototypes */
int combinations(int n, int k);
int fact(int n);
static void testCombination();

/* Main program */
int main() {
    cout << "Interaction Mode - 0" << endl;
    cout << "Testing Mode - 1" << endl;
    int selection = getInteger("Enter your selection:");
    if (selection) {
        cout << "******** Unit Testing ********" << endl;
        testCombination();
    } else {
        int n, k;
        cout << "Enter the number of objects (n): ";
        cin >> n;
        cout << "Enter the number to be chosen (k): ";
        cin >> k;
        cout << "C(n, k) = " << combinations(n, k) << endl;
    }

    return 0;
}

/*
 * Function: combinations(n, k)
 * Usage: int nWays = combinations(n, k);
 * --------------------------------------
 * Returns the mathematical combinations function C(n, k), which is
 * the number of ways one can choose k elements from a set of size n.
 */
int combinations(int n, int k) {
    return fact(n) / (fact(k) * fact(n - k));
}

/*
 * Function: fact(n)
 * Usage: int result = fact(n);
 * ----------------------------
 * Returns the factorial of n, which is the product of all the
 * integers between 1 and n, inclusive.
 */
int fact(int n) {
    int result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

// ********************** Testing ******************************

static void testCombination() {
    declare(int n = 6);
    declare(int k = 2);
    test(combinations(n, k), 15);
    reportResult("C(6, 2) = 15");
}