/*
Problem: 1154 - Ages
Answer: Accepted
Language: C99 (gcc 4.8.5, -std=c99 -O2 -lm) [+0s]
Runtime: 0.000s
File size: 347 Bytes
Memory: -
Submission: 9/25/24, 11:36:31 PM
*/


#include <stdio.h>

int main()
{
    int age = 1, sum = 0, counter = 0;
    while(age > 0)
    {
        scanf("%d", &age);
        if(age < 0)
        {
            break;
        }
        sum += age;
        counter++;

        
    }
    float avearge = (float) sum / counter;
    printf("%.2f\n", avearge);
    return 0;
}