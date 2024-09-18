/*
    Problem: 3346 - GDP Fluctuation
    Answer: Accepted
    Language:
    C99 (gcc 4.8.5, -std=c99 -O2 -lm) [+0s]
    Runtime: 0.000s
    File size: 196 Bytes
    Memory: -
    Submission: 9/19/24, 4:39:27 AM
*/


#include <stdio.h>

int main()
{
    double a, b;
    scanf("%lf %lf", &a, &b);
    double result = (((1 + a/100) * (1 + b/100)) - 1) * 100;
    printf("%.6lf\n", result);
    return 0;
}