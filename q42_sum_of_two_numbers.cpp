/*
============================================
  Question 42: Input two numbers and display their sum
  Student: om-ydv
============================================

Problem Statement:
  Write a C++ program that takes two numbers as input from the user
  and displays their sum.

Algorithm:
  Step 1: Start
  Step 2: Declare variables num1, num2, sum
  Step 3: Take input for num1 from user
  Step 4: Take input for num2 from user
  Step 5: Calculate sum = num1 + num2
  Step 6: Display sum
  Step 7: End

Dry Run:
  Input: num1 = 10, num2 = 20
  sum = 10 + 20 = 30
  Output: Sum = 30

Explanation of Logic:
  - Two integer variables store the input numbers
  - cin takes values from keyboard
  - The + operator adds the two numbers
  - Result is stored in sum and displayed using cout
============================================
*/

#include<iostream>
using namespace std;

int main(){
    int num1, num2, sum;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    sum = num1 + num2;

    cout << "Sum = " << sum << endl;

    return 0;
}
