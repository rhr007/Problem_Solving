#include <stdio.h>

int main()
{
    int x, z;
    scanf("%d %d", &x, &z);
    while(z <= x)
    {
        scanf("%d", &z);
    }
    int sum = x, counter = 1;
    for(int i = 1; i <= (z - x); i++)
    {
        sum += x + i;
        counter++;
        //printf("%d\n", sum);
        if(sum > z)
        {
            break;
        }
    }
    printf("%d\n", counter);
    return 0;
}