/*

DESCRIPTION:    PROGRAM TWO

CLASS:          COSC 1436.3S1

AUTHOR:         FRED TRINH

DATE:           13 JUNE 2017

*/

#include <iostream>

using namespace std;

void main ()

{
    // Detailed names for clarity
    short firstWholeNumber;
    short secondWholeNumber;
    float firstFractionalNumber;
    float secondFractionalNumber;
    
    cout << "Please enter a whole number:" << endl;
    cin >> firstWholeNumber;
    cout << "Please enter a second whole number:" << endl;
    cin >> secondWholeNumber;
    cout << endl;
    cout << "The original two numbers: " << firstWholeNumber << " and " << secondWholeNumber << endl;
    cout << "The sum of the two numbers: " << (firstWholeNumber + secondWholeNumber) << endl;
    cout << "The result of the first number divided by the second number: " << (firstWholeNumber / secondWholeNumber) << endl;
    cout << "The remainder of the first number divided by the second number: " << (firstWholeNumber % secondWholeNumber) << endl;
    cout << "The result of the first number times the second number: " << (firstWholeNumber * secondWholeNumber) << endl;
    cout << "The result of the first number minus the second number: " << (firstWholeNumber - secondWholeNumber) << endl;
    cout << endl;
    cout << endl;
    
    
    // Used for clean separation, visually
    cout << "************************************************************************" << endl;
    
    
    cout << endl;
    cout << endl;
    cout << "Please enter a fractional number:" << endl;
    cin >> firstFractionalNumber;
    cout << "Please enter a second fractional number:" << endl;
    cin >> secondFractionalNumber;
    cout << endl;
    cout << "The original two numbers: " << firstFractionalNumber << " and " << secondFractionalNumber << endl;
    cout << "The sum of the two numbers: " << (firstFractionalNumber + secondFractionalNumber) << endl;
    cout << "The result of the first number divided by the second number: " << (firstFractionalNumber / secondFractionalNumber) << endl;
    cout << "The result of the first number times the second number: " << (firstFractionalNumber * secondFractionalNumber) << endl;
    cout << "The result of the first number minus the second number: " << (firstFractionalNumber - secondFractionalNumber) << endl;
}
