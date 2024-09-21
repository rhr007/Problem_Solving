
// just printf("4\n"); is the answer


#include <stdio.h>
int from_1_to_19(int x);
int from_20_to_99(int x);

int main()
{
    int x, output;
    scanf("%d", &x);
    if(x >= 1 && x <= 19)
    {
        printf("%d\n", from_1_to_19(x));
    }
    else if(x >= 20 && x <= 99)
    {
        printf("%d\n", from_20_to_99(x));
    }
    else
    {
        printf("%d\n", 11);
    }

    return 0;
}

int from_1_to_19(int x)
{
    if(x ==1 || x == 2|| x == 6 || x == 10)
    {
        return 3;
    }
    else if(x == 3 || x == 7 || x == 8)
    {
        return 5;
    }
    else if(x == 4 || x == 5 || x == 9)
    {
        return 4;
    }
    else if(x == 11 || x == 12)
    {
        return 6;
    }
    else if(x == 15 || x == 16)
    {
        return 7;
    }
    else if(x == 13 || x == 14 || x == 18 || x == 19)
    {
        return 8;
    }
    else
    {
        return 9;
    }

}

int from_20_to_99(int x)
{
    if(x >= 20 && x <= 39 || x >= 80 && x <= 99)
    {
        int y = x % 10;
        if(y == 0)
        {
            return 6;
        }
        else
        {
            return 6+1+from_1_to_19(y);
        }
    }
    if(x >= 40 && x <= 69)
    {
        int y = x % 10;
        if(y == 0)
        {
            return 5;
        }
        else
        {
            return 5+1+from_1_to_19(y);
        }
    }
    if(x >= 70 && x <= 79)
    {
        int y = x % 10;
        if(y == 0)
        {
            return 7;
        }
        else
        {
            return 7+1+from_1_to_19(y);
        }
    }

}