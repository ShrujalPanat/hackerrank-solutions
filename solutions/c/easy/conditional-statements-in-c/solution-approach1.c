// ──────────────────────────────────────────────────
// Link        https://www.hackerrank.com/challenges/conditional-statements-in-c/problem?isFullScreen=true
// Problem     Conditional Statements in C
// Difficulty  Easy
// Subdomain   Conditionals and Loops
// Platform    HackerRank
// Language    c
// Status      Accepted
// Submitted   2026-11-01, 06:42 p.m.
// Technique   if-else-if-ladder
// Time        O(1)
// Space       O(1)
// Insight     The program maps a discrete range of integers to specific string literals using a sequential conditional ladder, defaulting to a catch-all branch for any value exceeding nine.
// Interview   Before: "I would use a switch statement or an array of strings to handle these mappings." After: "While those are cleaner, this if-else ladder performs in O(1) time and O(1) space, effectively handling the constraint n > 9 by falling through to the final else block."
// Pitfalls    (1) Failing to handle the n > 9 case correctly by omitting the final else block.  (2) Using incorrect string literals that do not match the lowercase English word requirement.  (3) Misinterpreting the range 1 to 9 by using incorrect comparison operators in the conditional chain.
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
