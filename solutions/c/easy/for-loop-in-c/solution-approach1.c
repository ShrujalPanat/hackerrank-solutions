// ──────────────────────────────────────────────────
// Link        https://www.hackerrank.com/challenges/for-loop-in-c/problem?isFullScreen=true
// Problem     For Loop in C
// Difficulty  Easy
// Subdomain   Conditionals and Loops
// Platform    HackerRank
// Language    c
// Status      Accepted
// Submitted   2026-11-02, 11:20 p.m.
// Technique   iterative-conditional-range-processing
// Time        O(b - a)
// Space       O(1)
// Insight     The implementation iterates through the inclusive range [a, b] and applies conditional logic to map integers 1-9 to their English names while classifying integers greater than 9 based on parity.
// Interview   Before: "How would you handle printing specific strings for a range of numbers?" After: "I iterate from a to b inclusive, using a series of if-else statements to check for values 1-9 and parity for values greater than 9, resulting in O(b - a) time complexity."
// Pitfalls    (1) Failing to include the upper bound b in the loop condition, which requires using i <= b instead of i < b.  (2) Incorrectly handling the parity check for numbers greater than 9 by omitting the i > 9 condition.  (3) Using an incorrect sequence of if-else statements that might prematurely catch values before reaching the parity check.
// ──────────────────────────────────────────────────


#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    for (int i = a; i <= b; i++) {
        if (i == 1)
            printf("one\n");
        else if (i == 2)
            printf("two\n");
        else if (i == 3)
            printf("three\n");
        else if (i == 4)
            printf("four\n");
        else if (i == 5)
            printf("five\n");
        else if (i == 6)
            printf("six\n");
        else if (i == 7)
            printf("seven\n");
        else if (i == 8)
            printf("eight\n");
        else if (i == 9)
            printf("nine\n");
        else if (i > 9 && i % 2 == 0)
            printf("even\n");
        else
            printf("odd\n");
    }

    return 0;
}
