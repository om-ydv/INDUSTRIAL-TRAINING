/*
=============================================================
   TIME COMPLEXITY - ANSWERS & ANALYSIS (Q21 to Q30)
=============================================================
*/

#include <stdio.h>

/* =========================================================
   Q21: T(n) = T(n-1) + 1
   ANSWER: O(n)

   ANALYSIS:
   - Problem size decreases by 1 each time
   - Only 1 unit of work per call

   EXPANSION:
     T(n) = T(n-1) + 1
          = T(n-2) + 1 + 1
          = T(n-3) + 1 + 1 + 1
          = T(n-k) + k
     When k = n:
          = T(0) + n = O(n)

   REAL EXAMPLE: Simple linear recursion (like print 1 to n)
   ========================================================= */
void Q21(int n) {
    if (n == 0) return;
    Q21(n - 1);         // T(n-1)
    printf("%d\n", n);  // +1 work
}


/* =========================================================
   Q22: T(n) = T(n-1) + n
   ANSWER: O(n^2)

   ANALYSIS:
   - Problem size decreases by 1 each time
   - But n units of work done per level

   EXPANSION:
     T(n) = T(n-1) + n
          = T(n-2) + (n-1) + n
          = T(n-3) + (n-2) + (n-1) + n
          = T(0) + 1 + 2 + 3 + ... + n
          = n(n+1)/2
          = O(n^2)

   REAL EXAMPLE: Insertion Sort recurrence
   ========================================================= */
void Q22_demo(int n) {
    if (n == 0) return;
    for (int i = 0; i < n; i++)  // n units of work
        printf("*");
    Q22_demo(n - 1);             // T(n-1)
}


/* =========================================================
   Q23: T(n) = T(n/2) + 1
   ANSWER: O(log n)

   ANALYSIS:
   - Problem size HALVES each time
   - Only 1 unit of work per call

   EXPANSION:
     T(n) = T(n/2) + 1
          = T(n/4) + 1 + 1
          = T(n/8) + 1 + 1 + 1
          = T(n/2^k) + k
     When n/2^k = 1  =>  k = log2(n)
          = T(1) + log2(n)
          = O(log n)

   MASTER THEOREM:
     a=1, b=2, f(n)=1
     n^(log_b a) = n^0 = 1
     f(n) = O(1) = same => Case 2 => O(log n)

   REAL EXAMPLE: Binary Search
   ========================================================= */
void Q23(int n) {
    if (n <= 1) return;
    printf("*");    // +1 work
    Q23(n / 2);     // T(n/2)
}


/* =========================================================
   Q24: T(n) = 2T(n-1) + 1
   ANSWER: O(2^n)

   ANALYSIS:
   - Problem size decreases by only 1
   - BUT 2 recursive calls made each time => Exponential!

   EXPANSION:
     T(n) = 2T(n-1) + 1
          = 2[2T(n-2) + 1] + 1  = 4T(n-2) + 3
          = 4[2T(n-3) + 1] + 3  = 8T(n-3) + 7
          = 2^k * T(n-k) + (2^k - 1)
     When k = n:
          = 2^n * T(0) + (2^n - 1)
          = 2^n + 2^n - 1
          = O(2^n)

   WARNING: Do NOT confuse with Q23!
     Q23: T(n/2)+1 => O(log n)   [halving, 1 call]
     Q24: 2T(n-1)+1 => O(2^n)   [two calls, -1 only]

   REAL EXAMPLE: Same as Q16 (fun calls itself twice with n-1)
   ========================================================= */
void Q24(int n) {
    if (n == 0) return;
    Q24(n - 1);     // call 1
    Q24(n - 1);     // call 2
    printf("*");    // +1 work
}


/* =========================================================
   Q25: T(n) = T(n/2) + n
   ANSWER: O(n)

   ANALYSIS:
   - Problem size halves each time
   - But n units of work per level

   EXPANSION:
     T(n) = T(n/2) + n
          = T(n/4) + n/2 + n
          = T(n/8) + n/4 + n/2 + n
          = n * (1 + 1/2 + 1/4 + ...)   [geometric series]
          = n * 2   (series sum converges to 2)
          = O(n)

   MASTER THEOREM:
     a=1, b=2, f(n)=n
     n^(log_b a) = n^0 = 1
     f(n) = n >> 1 => Case 3 => O(n)

   INTUITION: First level does n work. All remaining levels
   combined also do n work. Total = O(n).
   ========================================================= */
void Q25(int n) {
    if (n <= 1) return;
    for (int i = 0; i < n; i++)  // n units of work
        printf("*");
    Q25(n / 2);                  // T(n/2)
}


/* =========================================================
   Q26 [GATE-Level]:
   for(int i=1; i<=n; i++)        // outer: n times
       for(int j=1; j<=i; j*=2)  // inner: log(i) times

   ANSWER: O(n log n)

   ANALYSIS:
   Inner loop j doubles from 1 to i => log(i) iterations.

   Total = log(1) + log(2) + log(3) + ... + log(n)
         = log(1 * 2 * 3 * ... * n)
         = log(n!)

   By Stirling's Approximation:
         log(n!) ≈ n * log(n)
         => O(n log n)
   ========================================================= */
void Q26(int n) {
    int count = 0;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= i; j *= 2)
            count++;
    printf("Q26 count for n=%d: %d\n", n, count);
}


/* =========================================================
   Q27 [GATE-Level]:
   for(int i=1; i<=n; i*=2)   // outer: log n times
       for(int j=1; j<=n; j++) // inner: n times

   ANSWER: O(n log n)

   ANALYSIS:
   - Outer loop: i = 1,2,4,8,... => log n iterations
   - Inner loop: runs n times regardless of i

   Total = log(n) * n = O(n log n)
   ========================================================= */
void Q27(int n) {
    int count = 0;
    for (int i = 1; i <= n; i *= 2)
        for (int j = 1; j <= n; j++)
            count++;
    printf("Q27 count for n=%d: %d\n", n, count);
}


/* =========================================================
   Q28 [GATE-Level]:
   for(int i=n; i>=1; i--)    // outer: n times
       for(int j=i; j>=1; j--) // inner: i times

   ANSWER: O(n^2)

   ANALYSIS:
   Total = n + (n-1) + (n-2) + ... + 2 + 1
         = n(n+1)/2
         = O(n^2)

   NOTE: This is mirror image of Q3. Same result.
   ========================================================= */
void Q28(int n) {
    int count = 0;
    for (int i = n; i >= 1; i--)
        for (int j = i; j >= 1; j--)
            count++;
    printf("Q28 count for n=%d: %d\n", n, count);
}


/* =========================================================
   Q29 [GATE-Level]:
   for(int i=1; i<=n; i++)       // outer: n times
       for(int j=1; j<=n; j*=2) // inner: log n times

   ANSWER: O(n log n)

   ANALYSIS:
   - Outer: n iterations (i++)
   - Inner: j doubles from 1 to n => log n iterations
   - Inner does NOT depend on i (always 1 to n)

   Total = n * log(n) = O(n log n)

   DIFFERENCE FROM Q26:
     Q26: inner j goes from 1 to i  => O(n log n) via log(n!)
     Q29: inner j goes from 1 to n  => O(n log n) directly
   ========================================================= */
void Q29(int n) {
    int count = 0;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j *= 2)
            count++;
    printf("Q29 count for n=%d: %d\n", n, count);
}


/* =========================================================
   Q30 [GATE-Level]:
   void fun(int n) {
       if(n<=1) return;
       fun(n/2);    // call 1
       fun(n/2);    // call 2
   }

   ANSWER: O(n)

   ANALYSIS (Master Theorem):
   Recurrence: T(n) = 2T(n/2) + O(1)
     a = 2  (two recursive calls)
     b = 2  (problem halves)
     f(n) = O(1) (no work at each level besides calls)

     n^(log_b a) = n^(log2 2) = n^1 = n

     f(n) = O(1) < n => Case 1
     => T(n) = O(n^1) = O(n)

   INTUITION via Recursion Tree:
     Level 0: 1 node
     Level 1: 2 nodes
     Level 2: 4 nodes
     ...
     Level log(n): n nodes
     Total nodes = 1+2+4+...+n = 2n-1 = O(n)
   ========================================================= */
void Q30(int n) {
    if (n <= 1) return;
    Q30(n / 2);  // call 1
    Q30(n / 2);  // call 2
}


/* =========================================================
   QUICK REFERENCE SUMMARY
   ---------------------------------------------------------
   Q21  T(n) = T(n-1) + 1       =>  O(n)
   Q22  T(n) = T(n-1) + n       =>  O(n^2)
   Q23  T(n) = T(n/2) + 1       =>  O(log n)
   Q24  T(n) = 2T(n-1) + 1      =>  O(2^n)
   Q25  T(n) = T(n/2) + n       =>  O(n)
   Q26  i++, j*=2 (j<=i)        =>  O(n log n)
   Q27  i*=2, j++               =>  O(n log n)
   Q28  i--, j-- (j<=i)         =>  O(n^2)
   Q29  i++, j*=2 (j<=n)        =>  O(n log n)
   Q30  2T(n/2) + O(1)          =>  O(n)
   ========================================================= */

int main() {
    int n = 8;
    printf("=== Demo runs for n = %d ===\n\n", n);

    printf("Q21 - O(n): Printing 1 to n via recursion\n");
    Q21(n);

    printf("\nQ26 - O(n log n):\n");
    Q26(n);

    printf("Q27 - O(n log n):\n");
    Q27(n);

    printf("Q28 - O(n^2):\n");
    Q28(n);

    printf("Q29 - O(n log n):\n");
    Q29(n);

    printf("\nQ30 - O(n): Runs silently (no output in function)\n");
    Q30(n);
    printf("Q30 done.\n");

    return 0;
}
