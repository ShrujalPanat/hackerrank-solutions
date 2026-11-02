// ──────────────────────────────────────────────────
// Link        https://www.hackerrank.com/challenges/for-loop-in-c/problem?isFullScreen=true
// Problem     For Loop in C
// Difficulty  Easy
// Subdomain   Conditionals and Loops
// Platform    HackerRank
// Language    c
// Status      Accepted
// Submitted   2026-11-02, 11:20 p.m.
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
