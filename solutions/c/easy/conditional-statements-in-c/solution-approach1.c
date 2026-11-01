// ──────────────────────────────────────────────────
// Link        https://www.hackerrank.com/challenges/conditional-statements-in-c/problem?isFullScreen=true
// Problem     Conditional Statements in C
// Difficulty  Easy
// Subdomain   Conditionals and Loops
// Platform    HackerRank
// Language    c
// Status      Accepted
// Submitted   2026-11-01, 07:48 p.m.
// ──────────────────────────────────────────────────


#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    if (n == 1)
        printf("one");
    else if (n == 2)
        printf("two");
    else if (n == 3)
        printf("three");
    else if (n == 4)
        printf("four");
    else if (n == 5)
        printf("five");
    else if (n == 6)
        printf("six");
    else if (n == 7)
        printf("seven");
    else if (n == 8)
        printf("eight");
    else if (n == 9)
        printf("nine");
    else
        printf("Greater than 9");

    return 0;
}
