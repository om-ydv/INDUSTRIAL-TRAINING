/*
============================================================
Question 46: Why is a temporary variable used while swapping two numbers?
Question 47: Swap the values: a=10, b=20.
============================================================

--- Answer to Q46 ---
Why temporary variable is needed for swapping:

  When swapping two variables directly:
    a = b;  // a becomes 20, but original value of a (10) is LOST!
    b = a;  // b gets 20 again, not 10 — WRONG!

  To prevent losing the original value of 'a', we save it first
  in a temporary variable:
    temp = a;   // save a's value (10) in temp
    a = b;      // now a = 20
    b = temp;   // now b = 10 (retrieved from temp)

  Without temp, we lose one value permanently.

--- Program for Q47 ---

Problem Statement:
  Swap the values of a=10 and b=20 using a temporary variable.

Algorithm:
  Step 1: Start
  Step 2: Declare a = 10, b = 20, temp
  Step 3: temp = a (save a's value)
  Step 4: a = b   (a gets b's value)
  Step 5: b = temp (b gets original a's value)
  Step 6: Display a and b
  Step 7: End

Dry Run:
  Initial:  a = 10, b = 20
  temp = a  → temp = 10
  a = b     → a = 20
  b = temp  → b = 10
  Output: After swapping: a = 20, b = 10

Explanation:
  - temp is a helper variable that temporarily stores one value
  - This is the standard swapping technique
  - Without temp, one value would be permanently lost
============================================================
*/

#include<iostream>
using namespace std;

int main(){
    int a = 10, b = 20, temp;

    cout << "Before swapping: a = " << a << ", b = " << b << endl;

    temp = a;
    a = b;
    b = temp;

    cout << "After swapping: a = " << a << ", b = " << b << endl;

    return 0;
}
