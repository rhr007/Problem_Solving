/*
        Problem:
        3343 - Attack On Gasparini
        Answer:
        Accepted
        Language:
        C99 (gcc 4.8.5, -std=c99 -O2 -lm) [+0s]
        Runtime:
        0.126s
        File size:
        9.82 KB
        Memory:
        -
        Submission:
        9/19/24, 2:32:11 AM
*/


#include <stdio.h>

int main()
{
    int titans;
    scanf("%d", &titans);
    int wall_size;
    scanf("%d", &wall_size);
    int previous_walls[titans];
    int new_wall = wall_size;
    char titan_size_indicator[titans];
    scanf("%s", titan_size_indicator);
    int p;
    int m;
    int g;
    scanf("%d %d %d", &p, &m, &g);

    
    int i = 0;
    int titans_sum = 0;
    int wall_indicator = 0;
    int number_of_walls = 1;
    while(titan_size_indicator[i] != '\0')
    {
        //printf("%c", titan_size_indicator[i]);
        if(titan_size_indicator[i] == 'P')
        {
            // printf("\nS1\n");
            // printf("*****wall size %d\n", new_wall);
            if (wall_indicator == 0)
            {
                if(p > new_wall)
                {
                    number_of_walls++;
                    new_wall = wall_size;
                    new_wall -= p;
                    if(new_wall >= p)
                    {
                        previous_walls[wall_indicator] = new_wall;
                        wall_indicator++;
                    }
                }
                else
                {
                    new_wall -= p;
                    if(new_wall >= p)
                    {
                        previous_walls[wall_indicator] = new_wall;
                        wall_indicator++;
                    }
                }
            }
            else
            {
                // printf("\nS1\n");
                // printf("\nIndicator %d", wall_indicator);
                
                int dead = 0;
                for(int j = 0; j < wall_indicator; j++)
                {
                    // printf("\nS2\n");
                    
                    if(p <= previous_walls[j])
                    {
                        // printf("\nS4\n");
                        // printf("wall size %d\n", previous_walls[j]);
                        if(j == wall_indicator - 1)
                        {
                            new_wall -= p;
                            // printf("****wall size %d\n", new_wall);
                            previous_walls[j] -= p;
                            //printf("wall size %d\n", previous_walls[j]);
                        }
                        else
                        {
                            previous_walls[j] -= p;
                        }
                        dead = 1;
                        break;
                    }
                }
                if(dead == 0)
                {
                    // printf("\n***S3\n");
                    if(p > new_wall)
                    {
                        number_of_walls++;
                        new_wall = wall_size;
                        new_wall -= p;
                        if(new_wall >= p)
                        {
                            previous_walls[wall_indicator] = new_wall;
                            // printf("\n** Previous wall %d", previous_walls[wall_indicator]);
                            wall_indicator++;
                        }
                    }
                    else
                    {
                        new_wall -= p;
                        if(new_wall >= p)
                        {
                            previous_walls[wall_indicator] = new_wall;
                            wall_indicator++;
                        }
                            
                    }
                        
                }
                
            }
            
            
        }
        else if(titan_size_indicator[i] == 'M')
        {
            // printf("\nS1\n");
            // printf("wall size %d\n", new_wall);
            if (wall_indicator == 0)
            {
                // printf("\nS2\n");
                // printf("wall size %d\n", new_wall);
                if(m > new_wall)
                {
                    number_of_walls++;
                    new_wall = wall_size;
                    new_wall -= m;
                    if(new_wall >= p)
                    {
                        previous_walls[wall_indicator] = new_wall;
                        wall_indicator++;
                    }
                }
                else
                {
                    // printf("\nS3\n");
                    new_wall -= m;
                    // printf("wall size %d\n", new_wall);
                    if(new_wall >= p)
                    {
                        // printf("\nS4\n");
                        previous_walls[wall_indicator] = new_wall;
                        wall_indicator++;
                    }
                }
            }
            else
            {
                int dead = 0;
                for(int j = 0; j < wall_indicator; j++)
                {
                    if(m <= previous_walls[j])
                    {
                        if(j == wall_indicator - 1)
                        {
                            new_wall -= m;
                            previous_walls[j] -= m;
                        }
                        else
                        {
                            previous_walls[j] -= m;
                        }
                        dead = 1;
                        break;;
                    }
                }
                if(dead == 0)
                {
                        
                    if(m > new_wall)
                    {
                        number_of_walls++;
                        new_wall = wall_size;
                        new_wall -= m;
                        if(new_wall >= p)
                        {
                            previous_walls[wall_indicator] = new_wall;
                            wall_indicator++;
                        }
                    }
                    else
                    {
                        new_wall -= m;
                        if(new_wall >= p)
                        {
                            previous_walls[wall_indicator] = new_wall;
                            wall_indicator++;
                        }
                    }
                        
                }
            }
        }
        else
        {
           if (wall_indicator == 0)
            {
                if(g > new_wall)
                {
                    
                    number_of_walls++;
                    new_wall = wall_size;
                    new_wall -= g;
                    if(new_wall >= p)
                    {
                        previous_walls[wall_indicator] = new_wall;
                        wall_indicator++;
                    }
                }
                else
                {
                    new_wall -= g;
                    //printf("***new wall testing %d\n", new_wall);
                    if(new_wall >= p)
                    {
                        // printf("***Emergency\n");
                        previous_walls[wall_indicator] = new_wall;
                        wall_indicator++;
                    }
                }
            }
            else
            {
                int dead = 0;
                for(int j = 0; j < wall_indicator; j++)
                {
                    // printf("\n^^^^RHR\n");
                    // printf("wall size %d\n", new_wall);
                    if(g <= previous_walls[j])
                    {
                        if(j == wall_indicator - 1)
                        {
                            // printf("\n s7\n");
                            new_wall -= g;
                            // printf("****wall size %d\n", new_wall);
                            previous_walls[j] -= g;
                            // printf("wall size %d\n", previous_walls[j]);
                        }
                        else
                        {
                            previous_walls[j] -= g;
                        }
                        dead = 1;
                        break;
                    }
                }
                if(dead == 0)
                {       
                    // printf("^^^^RHR5\n");
                    // printf("\n wall size %d\n", new_wall);
                            
                    if(g > new_wall)
                    {
                        number_of_walls++;
                        // printf("Number of Walls %d", number_of_walls);
                        new_wall = wall_size;
                        new_wall -= g;
                        // printf("*****wall size %d\n", new_wall);
                        if(new_wall >= p)
                        {
                            previous_walls[wall_indicator] = new_wall;
                            wall_indicator++;
                        }
                    }
                    else
                    {
                        // printf("***Testing***");
                        new_wall -= g;
                        if(new_wall >= p)
                        {
                            previous_walls[wall_indicator] = new_wall;
                            wall_indicator++;
                        }
                    }
                        
                }
                
            }
        }

        // if(titans_sum >= wall_size)
        // {
        //     number_of_walls++;
        //     titans_sum -= wall_size;
        // }

        // if(new_wall < 0 || new_wall == 0 && i != titans -1)
        // {
        //     number_of_walls++;
        //     new_wall += wall_size;
        //     while(new_wall < 0)
        //     {
        //         number_of_walls++;
        //         new_wall += wall_size;
        //     }
        // }
        
        i++;
    }
    

    printf("%d\n", number_of_walls);
    

    return 0;
}
