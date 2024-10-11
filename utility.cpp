/*
 * utility.cpp
 * Project UID e98fd45ccce9d7195e89e6171a5451f2
 *
 * Joelle Morris
 * morj
 *
 * EECS 183: Project 3
 * Fall 2024
 *
 * <#description#>
 */

#include "utility.h"
#include <iostream>

//************************************************************************
// Implement the functions below this line.
//************************************************************************

// Function converts lowercase chars in a string to uppercase
string toUpperCase(string original) {
    // This constant is the difference in ASCII dec values between uppercase 
    // and lowercase of the same letter.
    const int ASCII_TO_UPPER = 32;
    for (int i = 0; i < original.length(); ++i) {
        if (original.at(i) >= 'a' && original.at(i) <= 'z') {
            original.at(i) -= ASCII_TO_UPPER;
        }
    }

    return original;
}

// Function removes all non-alphabetic characters in a string
string removeNonAlphas(string original) {
    for (int i = original.length() - 1; i >= 0; --i) {
        if (original.at(i) < 'A' || original.at(i) > 'z' ||
            (original.at(i) > 'Z' && original.at(i) < 'a')) {
            original.erase(i, 1);
        }
    }

    return original;
}

// Function converts a char from '0' to '9' into an int
int charToInt(char original) {
    int num = static_cast<int>(original - '0');

    return num;
}

// Function removes duplicate chars in a string, leaving only the first 
// iteration of the char
string removeDuplicate(string original) {
    for (int i = 1; i < original.length(); ++i) {
        for (int j = 0; j < i; ++j) {
            if (original.at(i) == original.at(j)) {
                original.erase(i, 1);
                --i;
            }
        }
    }

    return original;
}

////////////////////////////////////////////////////////////////////////////////
// Do not touch code below. ////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////

void printGrid(const char grid[SIZE][SIZE]) {
    for (int col = 0; col < SIZE; col++) {
        cout << " ---";
    }
    cout << endl;
    for (int row = 0; row < SIZE; row++) {
        cout << "| ";
        for (int col = 0; col < SIZE; col++) {
            cout << string(1, grid[row][col]) + " | ";
        }
        cout << endl;
        for (int col = 0; col < SIZE; col++) {
            cout << " ---";
        }
        cout << endl;
    }
}
