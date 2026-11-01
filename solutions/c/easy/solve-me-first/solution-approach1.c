// ──────────────────────────────────────────────────
// Link        https://www.hackerrank.com/challenges/solve-me-first/problem?isFullScreen=true
// Problem     Solve Me First
// Difficulty  Easy
// Subdomain   Warmup
// Platform    HackerRank
// Language    c
// Status      Accepted
// Submitted   2026-11-01, 10:18 p.m.
// Technique   arithmetic-addition
// Time        O(1)
// Space       O(1)
// Insight     The function computes the sum of two integers by applying the addition operator directly to the provided input parameters.
// Interview   Before: "How would you implement a function to add two integers?" After: "I would use the addition operator to return the sum in O(1) time and O(1) space, ensuring the result fits within the integer type constraints."
// Pitfalls    (1) Integer overflow may occur if the sum of a and b exceeds the maximum value representable by the int type.
// ──────────────────────────────────────────────────

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int solveMeFirst(int a, int b) {
    return a + b;
}

int main() {
    int num1, num2;
    scanf("%d %d", &num1, &num2);

    int sum;
    sum = solveMeFirst(num1, num2);
    printf("%d", sum);

    return 0;
}
