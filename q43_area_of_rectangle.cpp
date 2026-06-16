/*
============================================
  Question 43: Calculate the area of a rectangle
  Student: om-ydv
============================================

Problem Statement:
  Write a C++ program to calculate and display the area of a rectangle
  by taking length and width as input from the user.

Algorithm:
  Step 1: Start
  Step 2: Declare variables length, width, area
  Step 3: Take input for length
  Step 4: Take input for width
  Step 5: Calculate area = length * width
  Step 6: Display area
  Step 7: End

Dry Run:
  Input: length = 5, width = 3
  area = 5 * 3 = 15
  Output: Area of Rectangle = 15

Explanation of Logic:
  - Formula for area of rectangle = length x width
  - We take length and width as input from user
  - Multiply them using * operator
  - Display the result using cout
============================================
*/

#include<iostream>
using namespace std;

int main(){
    float length, width, area;

    cout << "Enter length of rectangle: ";
    cin >> length;

    cout << "Enter width of rectangle: ";
    cin >> width;

    area = length * width;

    cout << "Area of Rectangle = " << area << endl;

    return 0;
}
