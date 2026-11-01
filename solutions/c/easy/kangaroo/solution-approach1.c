// ──────────────────────────────────────────────────
// Link        https://www.hackerrank.com/challenges/kangaroo/problem?isFullScreen=true
// Problem     Number Line Jumps
// Difficulty  Easy
// Subdomain   Implementation
// Platform    HackerRank
// Language    c
// Status      Accepted
// Submitted   2026-11-01, 08:17 p.m.
// ──────────────────────────────────────────────────


#include <stdio.h>

int main() {
    int x1, v1, x2, v2;
    scanf("%d %d %d %d", &x1, &v1, &x2, &v2);

    if (v1 > v2 && (x2 - x1) % (v1 - v2) == 0)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}
