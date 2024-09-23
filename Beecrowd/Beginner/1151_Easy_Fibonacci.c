#include <stdio.h>

int main()
{
    int n, first_fibo = 0, second_fibo = 1, third_fibo;
    scanf("%d", &n);
    if(n == 0)
    {
        return 0;
    }
    else if(n == 1)
    {
        printf("%d", first_fibo);
    }
    else if(n == 2)
    {
        printf("%d %d", first_fibo, second_fibo);
    }
    else
    {
        printf("%d %d", first_fibo, second_fibo);
        for(int i = 0; i < n -2; i++)
        {
            third_fibo = first_fibo + second_fibo;
            first_fibo = second_fibo;
            second_fibo = third_fibo;
            printf("% d", third_fibo);
        }
        printf("\n");
        return 0;
    }
    
}