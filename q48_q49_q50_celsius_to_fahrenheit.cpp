/*
============================================================
Question 48: What formula is used to convert Celsius to Fahrenheit?
Question 49: What is the Fahrenheit value of 0 degree Celsius?
Question 50: Why can integer division give incorrect results in
             the Celsius-to-Fahrenheit program?
============================================================

--- Answer to Q48 ---
Formula to convert Celsius to Fahrenheit:

  F = (C * 9/5) + 32

  Or equivalently:
  F = (C * 9.0 / 5.0) + 32

  Where:
    C = Temperature in Celsius
    F = Temperature in Fahrenheit

--- Answer to Q49 ---
Fahrenheit value of 0 degree Celsius:

  F = (0 * 9/5) + 32
  F = 0 + 32
  F = 32

  So 0 degree Celsius = 32 degree Fahrenheit
  (This is the freezing point of water)

--- Answer to Q50 ---
Why integer division gives incorrect results:

  In C++, when both operands are integers, division gives integer result.
  Example:
    9/5 = 1  (not 1.8!) because integer division truncates decimals

  So: F = (C * 9/5) + 32
  If C = 100:
    Wrong:   (100 * 9/5) + 32 = (100 * 1) + 32 = 132  ← WRONG!
    Correct: (100 * 9.0/5.0) + 32 = 180 + 32 = 212     ← CORRECT!

  Solution: Use float/double variables or write 9.0/5.0 instead of 9/5

--- Program ---

Problem Statement:
  Accept temperature in Celsius and convert it to Fahrenheit.

Algorithm:
  Step 1: Start
  Step 2: Declare variables celsius, fahrenheit (float)
  Step 3: Input celsius from user
  Step 4: Calculate fahrenheit = (celsius * 9.0/5.0) + 32
  Step 5: Display fahrenheit
  Step 6: End

Dry Run:
  Input: celsius = 100
  fahrenheit = (100 * 9.0/5.0) + 32
             = (900.0/5.0) + 32
             = 180.0 + 32
             = 212.0
  Output: 100 Celsius = 212 Fahrenheit

Explanation:
  - We use float to avoid integer division errors
  - 9.0/5.0 ensures decimal division (1.8), not integer (1)
  - Formula: F = (C × 9/5) + 32
============================================================
*/

#include<iostream>
using namespace std;

int main(){
    float celsius, fahrenheit;

    cout << "Enter temperature in Celsius: ";
    cin >> celsius;

    fahrenheit = (celsius * 9.0 / 5.0) + 32;

    cout << celsius << " Celsius = " << fahrenheit << " Fahrenheit" << endl;

    return 0;
}
