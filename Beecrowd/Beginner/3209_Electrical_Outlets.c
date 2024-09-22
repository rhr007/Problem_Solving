#include <stdio.h>

int main()
{
    int test_cases, strips, strips_hole;
    
    int counter = 0;
    scanf("%d", &test_cases);
    int answers[test_cases];
    for(int i = 0; i < test_cases; i++)
    {
        int result = 0;
        scanf("%d", &strips);
        for(int j = 1; j <= strips; j++)
        {
            scanf("%d", &strips_hole);
            result += strips_hole -1;
        }
        answers[counter] = result + 1;
        counter++;
    }

    for(int i = 0; i < counter; i++)
    {
        printf("%d\n", answers[i]);
    }

    return 0;
}