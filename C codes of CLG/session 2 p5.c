//Write a program to read three numbers from keyboard and find out maximum out of these three. (nested if else)
#include<stdio.h>
void main()
{
    int i,j,k;

printf("enter your three number :");
scanf("%d%d%d",&i,&j,&k);

    if(i>j)
    {
        if(k>i)
            printf("maximum number is %d",k);
        else
            printf("maximum number is %d",i);
    }
    else
        {
        if(k>j)
            printf("maximum number is %d",k);
        else
            printf("maximum number is %d",js);
    }
}
