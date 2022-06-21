//Write a program to print name & team of those players whose batting average is greater than given value.
#include<stdio.h>
#include<conio.h>

struct cricket
{
    char name[10];
    char teamname[10];
    float batting_avg;
} c[3];
int main()
{
    for(int i=0; i<=2; i++)
    {
        printf("\nenter player name :\t");
        scanf("%s",&c[i].name);
        printf("\nenter team name :\t");
        scanf("%s",&c[i].teamname);
        printf("\nenter batting average :\t");
        scanf("%f",&c[i].batting_avg);

        for(int j=0; j<=10; j++)
        {
            printf("* - ");
        }
    }
    for(int k=0; k<=2; k++)
    {
        if(c[k].batting_avg>70)
        {

            printf("\n player %s\t is play for team %s\t and his batting average is %f.",c[k].name,c[k].teamname,c[k].batting_avg);
        }
    }
    return 0;
}
