// ──────────────────────────────────────────────────
// Link        https://www.hackerrank.com/challenges/kangaroo/problem?isFullScreen=true
// Problem     Number Line Jumps
// Difficulty  Easy
// Subdomain   Implementation
// Platform    HackerRank
// Language    c
// Status      Accepted
// Submitted   2026-11-01, 08:17 p.m.
// Technique   linear-equation-intersection
// Time        O(1)
// Space       O(1)
// Insight     The kangaroos meet if and only if the relative distance between them is perfectly divisible by the difference in their jump velocities, provided the trailing kangaroo is faster.
// Interview   Before: "I would simulate the jumps in a loop until they meet or pass each other." After: "Since the movement is linear, I can solve the equation x1 + n*v1 = x2 + n*v2 for n in O(1) time, ensuring the trailing kangaroo has a higher velocity."
// Pitfalls    (1) Failing to check if the trailing kangaroo is faster, which leads to incorrect results when the leading kangaroo has a higher or equal velocity.  (2) Ignoring the modulo condition, which is required to ensure the meeting point occurs at an integer number of jumps.  (3) Assuming the kangaroos start at the same position, which is not guaranteed by the problem constraints.
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
