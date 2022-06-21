/*Write a program to read marks from keyboard and your program should display equivalent grade according to following table (if else ladder)
Marks Grade
100 - 80 Distinction
79 - 60 First Class
59 - 40 Second Class
< 40 Fail*/
#include<stdio.h>
int main()
{
    int  i;
    printf("enter your marks :");
    scanf("%d",&i);

    if(i<=100 && i>=80)
        {
            printf("your are in distinction");
        }
    else if(i<80 && i>=60)
        {
            printf("your are in grade A");
        }
    else if(i<60 && i>=40)
        {
            printf("your are in grade B");
        }
    else if(i<40 && i>=00)
        {
            printf("your are in grade C");
        }
    else
        {
            printf("enter valid marks");
        }
return 0;
}
