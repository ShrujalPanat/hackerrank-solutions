// ──────────────────────────────────────────────────
// Link        https://www.hackerrank.com/challenges/fizzbuzz/problem?isFullScreen=true
// Problem     FizzBuzz
// Difficulty  Advanced
// Subdomain   N/A
// Platform    HackerRank
// Language    c
// Status      Accepted
// Submitted   2026-11-01, 11:41 p.m.
// Technique   modulo-conditional-branching
// Time        O(n)
// Space       O(1)
// Insight     The implementation prioritizes the least common multiple of three and five to handle the combined condition before checking individual divisors.
// Interview   Before: "How would you handle the overlapping multiples of 3 and 5?" After: "I check the modulo 15 condition first to ensure the combined case is caught, resulting in O(n) time complexity for the 100 iterations."
// Pitfalls    (1) Checking modulo 3 or 5 before modulo 15 causes incorrect output for multiples of 15.  (2) Using an incorrect loop range like i < 100 instead of i <= 100 fails to print the final number.
// ──────────────────────────────────────────────────


#include <stdio.h>
int main(){
    for(int i=1;i<=100;i++){
        if(i%15==0)puts("FizzBuzz");
        else if(i%3==0)puts("Fizz");
        else if(i%5==0)puts("Buzz");
        else printf("%d\n",i);
    }
}
