#include <stdio.h>

int main()
{
    int a, n;
    scanf("%d %d", &a, &n);
    int sum = a;
    while(n <= 0)
    {
        scanf("%d", &n);
    }
    for(int i = 1; i < n; i++)
    {
        sum += (a + i);
    }
    printf("%d\n", sum);
    return 0;
}