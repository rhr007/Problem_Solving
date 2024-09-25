/*
Problem: 1155 - S Sequence
Answer: Accepted
Language: C99 (gcc 4.8.5, -std=c99 -O2 -lm) [+0s]
Runtime: 0.000s
File size: 192 Bytes
Memory: -
Submission: 9/25/24, 11:54:18 PM
*/

#include <stdio.h>

int main()
{
    float a = 1.0;
    float S = 0.00;
    for(int i = 1; i <= 100; i++)
    {
        S += a/i;
    }
    printf("%.2f\n", S);
    return 0;
}