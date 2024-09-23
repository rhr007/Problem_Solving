#include <stdio.h>

int main()
{
    int x;
    scanf("%d", &x);
    while(x != 0)
    {
        for(int i = 1; i <= x; i++)
        {
            if(i == x)
            {
                printf("%d\n", i);
            }
            else
            {
                printf("%d ", i);
            }
        }
        scanf("%d", &x);
    }
    return 0;
}