/*
SUBMISSION # 41646351
Problem:3224 - Aaah!
Answer: Accepted
Language: C99 (gcc 4.8.5, -std=c99 -O2 -lm) [+0s]
Runtime: 0.000s
File size: 675 Bytes
Memory: -
Submission: 9/24/24, 1:21:57 AM
*/
#include <stdio.h>

int main()
{
    char person[1000], doctor[1000];
    scanf("%[^\n]", person);

    scanf(" %[^\n]", doctor);
    int person_a = 0, doctor_a = 0;
    int i = 0, j = 0;
    while(person[i] != '\0')
    {
        if(person[i] == 'a')
        {
            person_a++;
        }
        i++;
    }
    while(doctor[j] != '\0')
    {
        if(doctor[j] == 'a')
        {
            doctor_a++;
        }
        j++;
    }
    //printf("Person a = %d && Doctor a = %d\n", person_a, doctor_a);
    if(person_a >= doctor_a)
    {
        printf("go\n");
    }
    else
    {
        printf("no\n");
    }

    return 0;
}