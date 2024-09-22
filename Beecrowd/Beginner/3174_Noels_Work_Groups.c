#include <stdio.h>
#include <string.h>

struct workers
{
    char name[50], type[15];
    int hour;
};


int main()
{
    int n;
    scanf("%d", &n);

    int dolls = 8,  archi = 4, music = 6, drawners = 12;

    int t_dolls = 0, t_archi = 0, t_music = 0, t_drawenrs = 0;
    int t_toys = 0;


    struct workers list[n];
    for(int i = 0; i < n; i++)
    {
        scanf("%s %s %d", list[i].name, list[i].type, &list[i].hour);
    }
    for(int i = 0; i < n; i++)
    {
        //printf("%s\n", list[i].type);
        //printf("%s %s %d", list[i].name, list[i].type, list[i].hour);
        if(strcmp(list[i].type, "bonecos") == 0)
        {
            t_dolls += list[i].hour;
            //printf("***%d**\n", list[i].hour);
        }
        else if(strcmp(list[i].type, "arquitetos") == 0)
        {
            t_archi += list[i].hour;
            //printf("%d\n", t_archi);
        }
        else if(strcmp(list[i].type, "musicos") == 0)
        {
            t_music += list[i].hour;
        }
        else if(strcmp(list[i].type, "desenhistas") == 0)
        {
            t_drawenrs += list[i].hour;
        }
    }
    t_toys = t_dolls/dolls + t_archi/archi + t_music/music + t_drawenrs/drawners;
    printf("%d\n", t_toys);
    // printf("%d\n", t_dolls/dolls);
    // printf("%d\n", t_archi);
    // printf("%d\n", t_music);
    // printf("%d\n", t_drawenrs/drawners);
    // printf("%s\n", list[1].type);
    // printf("\n**%d", strcmp(list[1].type, "arquitetos"));
    return 0;
}
