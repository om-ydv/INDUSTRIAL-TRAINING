/*
============================================
  Question 45: Program to calculate Simple Interest
  Student: om-ydv
============================================

Problem Statement:
  Write a C++ program to calculate Simple Interest.
  Formula: SI = (P * R * T) / 100

Algorithm:
  Step 1: Start
  Step 2: Declare variables principal, rate, time, si
  Step 3: Take input for principal (P)
  Step 4: Take input for rate (R)
  Step 5: Take input for time (T)
  Step 6: Calculate SI = (P * R * T) / 100
  Step 7: Display SI
  Step 8: End

Dry Run:
  Input: P = 1000, R = 5, T = 2
  SI = (1000 * 5 * 2) / 100
  SI = 10000 / 100
  SI = 100
  Output: Simple Interest = 100

Explanation of Logic:
  - We use float to handle decimal values in rate or result
  - Formula SI = (P * R * T) / 100 is directly applied
  - Result is displayed using cout
============================================
*/

#include<iostream>
using namespace std;

int main(){
    float principal, rate, time, si;

    cout << "Enter Principal amount: ";
    cin >> principal;

    cout << "Enter Rate of interest (per year): ";
    cin >> rate;

    cout << "Enter Time (in years): ";
    cin >> time;

    si = (principal * rate * time) / 100;

    cout << "Simple Interest = " << si << endl;

    return 0;
}
