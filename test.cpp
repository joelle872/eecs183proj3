/*
 * test.cpp
 *
 * Joelle Morris
 * morj
 *
 * These are the test cases for project 3
 */

#include "utility.h"
#include "caesar.h"
#include "vigenere.h"
#include "polybius.h"

#include <iostream>
#include <string>

using namespace std;

void testShiftAlphaCharacter();
void testToUpperCase();
void testRemoveNonAlphas();
void testCharToInt();
void testRemoveDuplicate();

void startTests() {
    testShiftAlphaCharacter();
    // Repeat for all other functions to be tested
    testToUpperCase();
    testRemoveNonAlphas();
    testCharToInt();
    testRemoveDuplicate();

    return;
}

void testToUpperCase() {
    cout << "Now testing function toUpperCase()" << endl;
    cout << "Expected: 'GREEN', Actual: '" << toUpperCase("green") << "'" << endl;
    cout << "Expected: 'CL OPE', Actual: '" << toUpperCase("cL oPE") << "'" << endl;
    cout << "Expected: 'TRIPE', Actual: '" << toUpperCase("TRIPE") << "'" << endl;
    return;
}

void testRemoveNonAlphas() {
    cout << "Now testing function removeNonAlphas()" << endl;
    cout << "Expected: 'Friend', Actual: '" << removeNonAlphas("F123riend") << "'" << endl;
    cout << "Expected: 'CLOPE', Actual: '" << removeNonAlphas("C;L O@PE") << "'" << endl;
    cout << "Expected: 'tripe', Actual: '" << removeNonAlphas("tr[_ip=e5") << "'" << endl;
    return;
}

void testCharToInt() {
    cout << "Now testing function charToInt()" << endl;
    cout << "Expected: '0', Actual: '" << charToInt('0') << "'" << endl;
    cout << "Expected: '5', Actual: '" << charToInt('5') << "'" << endl;
    cout << "Expected: '9', Actual: '" << charToInt('9') << "'" << endl;
    return;
}

void testRemoveDuplicate() {
    cout << "Now testing function removeDuplicate()" << endl;
    cout << "Expected: 'Friend', Actual: '" << removeDuplicate("FFFrrrrieeend") << "'" << endl;
    cout << "Expected: 'CcL0PE', Actual: '" << removeDuplicate("CcL000000PE") << "'" << endl;
    cout << "Expected: 'tripeE', Actual: '" << removeDuplicate("triprrreEtttt") << "'" << endl;
    return;
}

void testShiftAlphaCharacter() {
    cout << "Now testing function shiftAlphaCharacter()" << endl;
    cout << "Expected: 'a', Actual: '" << shiftAlphaCharacter('a', 0) << "'" << endl;
    cout << "Expected: 'b', Actual: '" << shiftAlphaCharacter('a', 1) << "'" << endl;
    cout << "Expected: 'd', Actual: '" << shiftAlphaCharacter('b', 2) << "'" << endl;
    return;
}

