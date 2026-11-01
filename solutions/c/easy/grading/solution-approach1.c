// ──────────────────────────────────────────────────
// Link        https://www.hackerrank.com/challenges/grading/problem?isFullScreen=true
// Problem     Grading Students
// Difficulty  Easy
// Subdomain   Implementation
// Platform    HackerRank
// Language    c
// Status      Accepted
// Submitted   2026-11-01, 07:57 p.m.
// Technique   arithmetic-rounding-logic
// Time        O(n)
// Space       O(n)
// Insight     The algorithm identifies the next multiple of five by integer division and conditional rounding, skipping values below thirty-eight to satisfy the university's grading policy.
// Interview   Before: "I would use a series of if-else statements to check every possible grade." After: "I calculate the next multiple of five using integer division and apply the rounding rule only if the grade is at least thirty-eight, achieving O(n) time complexity for n students."
// Pitfalls    (1) Failing to check the grade threshold of 38, which causes incorrect rounding for failing grades.  (2) Using an incorrect rounding condition, as the policy requires the difference to be strictly less than 3.  (3) Assuming the next multiple of 5 is always (grade + 5) / 5 * 5, which fails for grades already divisible by 5.
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
