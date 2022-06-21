//Write a C program to read a number and check it is even or odd.
#include<stdio.h>
void main ()
{
    int i,result;
    printf("enter your integer:");
    scanf("%d",&i);

    result=(i%2);

    if(result==0)
        printf("this number is EVEN.");
    else
        printf("this number is ODD.");
}
