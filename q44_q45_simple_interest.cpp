/*
============================================================
Question 44: What formula is used to calculate Simple Interest?
Question 45: Write a program to calculate Simple Interest.
============================================================

--- Answer to Q44 ---
Formula for Simple Interest:

  SI = (P * R * T) / 100

  Where:
    P = Principal amount (initial money)
    R = Rate of interest per year (in %)
    T = Time period (in years)
    SI = Simple Interest

  Example:
    P = 1000, R = 5, T = 2
    SI = (1000 * 5 * 2) / 100 = 100

--- Program for Q45 ---

Problem Statement:
  Accept Principal, Rate and Time from user and calculate Simple Interest.

Algorithm:
  Step 1: Start
  Step 2: Declare variables P, R, T, SI
  Step 3: Input P, R, T from user
  Step 4: Calculate SI = (P * R * T) / 100
  Step 5: Display SI
  Step 6: End

Dry Run:
  Input: P = 1000, R = 5, T = 2
  SI = (1000 * 5 * 2) / 100
  SI = 10000 / 100
  SI = 100
  Output: Simple Interest = 100

Explanation:
  - We use float to handle decimal values in interest
  - Formula SI = (P*R*T)/100 is directly implemented
  - Result is displayed using cout
============================================================
*/

#include<iostream>
using namespace std;

int main(){
    float P, R, T, SI;

    cout << "Enter Principal amount: ";
    cin >> P;

    cout << "Enter Rate of interest (%): ";
    cin >> R;

    cout << "Enter Time period (years): ";
    cin >> T;

    SI = (P * R * T) / 100;

    cout << "Simple Interest = " << SI << endl;

    return 0;
}
