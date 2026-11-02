// ──────────────────────────────────────────────────
// Link        https://www.hackerrank.com/challenges/solve-me-first/problem?isFullScreen=true
// Problem     Solve Me First
// Difficulty  Easy
// Subdomain   Warmup
// Platform    HackerRank
// Language    c
// Status      Accepted
// Submitted   2026-11-02, 11:22 p.m.
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
