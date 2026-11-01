// ──────────────────────────────────────────────────
// Link        https://www.hackerrank.com/challenges/grading/problem?isFullScreen=true
// Problem     Grading Students
// Difficulty  Easy
// Subdomain   Implementation
// Platform    HackerRank
// Language    c
// Status      Accepted
// Submitted   2026-11-01, 07:57 p.m.
// ──────────────────────────────────────────────────


#include <stdio.h>

int main() {
    int n, i;
    scanf("%d", &n);

    int grades[n];

    for (i = 0; i < n; i++) {
        scanf("%d", &grades[i]);
    }

    for (i = 0; i < n; i++) {
        if (grades[i] >= 38) {
            int next = ((grades[i] / 5) + 1) * 5;

            if (next - grades[i] < 3) {
                grades[i] = next;
            }
        }
    }

    for (i = 0; i < n; i++) {
        printf("%d\n", grades[i]);
    }

    return 0;
}
