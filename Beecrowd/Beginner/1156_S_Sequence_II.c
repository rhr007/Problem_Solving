/*
Problem: 1156 - S Sequence II
Answer: Accepted
Language: C99 (gcc 4.8.5, -std=c99 -O2 -lm) [+0s]
Runtime: 0.000s
File size: 252 Bytes
Memory: -
Submission: 9/26/24, 12:04:21 A 
*/

#include <stdio.h>

int main()
{
    float a = 1, Sum = 0.0;
    int divisor = 1;
    for(int i = 1; i <= 20; i++)
    {
        Sum += a / divisor;
        a +=2;
        divisor *= 2;
    }
    printf("%.2f\n", Sum);
    return 0;
}