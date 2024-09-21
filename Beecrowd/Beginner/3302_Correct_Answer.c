#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int questions_list[n];
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &questions_list[i]);
    }
    for(int i = 0; i < n; i++)
    {
        printf("resposta %d: %d\n", i+1, questions_list[i]);
    }
    return 0;
}