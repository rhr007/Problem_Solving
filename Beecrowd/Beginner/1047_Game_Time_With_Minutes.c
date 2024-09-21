#include <stdio.h>

int main()
{
    int start_hour, start_minute, stop_hour, stop_minute;
    scanf("%d %d %d %d", &start_hour, &start_minute, &stop_hour, &stop_minute);

    int reamining_minutes_to_next_hour = 60 - start_minute;
    int next_hour_after_starting = start_hour + 1;

    int hour_duration, minute_duration;
    if(start_hour == stop_hour && stop_minute > start_minute)
    {
        hour_duration = 0;
        minute_duration = stop_minute - start_minute;

    }
    else
    {
        if(next_hour_after_starting <= stop_hour)
        {
            hour_duration = stop_hour - next_hour_after_starting;
        }
        else
        {
            hour_duration = (24 - next_hour_after_starting) + stop_hour;
        }

        minute_duration = reamining_minutes_to_next_hour + stop_minute;
        if(minute_duration >= 60)
        {
            hour_duration++;
            minute_duration = minute_duration % 60;
        }
    }

    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", hour_duration, minute_duration);



    return 0;
}