/*
============================================
  Question 47: Swap the values: a=10, b=20
  Student: om-ydv
============================================

Problem Statement:
  Write a C++ program to swap the values of two variables a=10 and b=20
  using a temporary variable.

Algorithm:
  Step 1: Start
  Step 2: Declare a = 10, b = 20, temp
  Step 3: temp = a  (save value of a)
  Step 4: a = b     (copy b into a)
  Step 5: b = temp  (copy saved a into b)
  Step 6: Display swapped values
  Step 7: End

Dry Run:
  Initial:  a = 10, b = 20, temp = ?
  Step 3:   temp = 10
  Step 4:   a = 20
  Step 5:   b = 10
  Output: After swapping: a = 20, b = 10

Explanation of Logic:
  - A third variable 'temp' temporarily holds the value of 'a'
  - This prevents the value of 'a' from being lost when we assign b to a
  - Finally, temp (original a) is assigned to b completing the swap
============================================
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
