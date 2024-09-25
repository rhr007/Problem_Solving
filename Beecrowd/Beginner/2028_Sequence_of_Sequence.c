/*
Problem: 2028 - Sequence of Sequence
Answer: Accepted
Language: C99 (gcc 4.8.5, -std=c99 -O2 -lm) [+0s]
Runtime: 0.248s
File size: 742 Bytes
Memory: -
Submission: 9/25/24, 11:21:40 PM
*/




#include <stdio.h>

int main()
{
    int N,  cases = 1;;
    while((scanf("%d", &N)) != EOF)
    {
        int total_numbers = 1;
        for(int i = 0; i <= N; i++)
        {
            total_numbers += i;
        }
        if(N == 0)
        {
            printf("Caso %d: %d numero\n", cases, total_numbers);
            printf("0");
        }
        else
        {
            printf("Caso %d: %d numeros\n", cases, total_numbers);
            printf("0");
        }
        
        for(int i = 1; i <= N; i++)
        {
            for(int j = 1; j <= i; j++)
            {
                printf(" %d", i);
            }
        }
        printf("\n\n");
        cases++;
    }
    return 0;
    
}