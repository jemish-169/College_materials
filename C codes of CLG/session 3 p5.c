//Write a program to generate first n number of Fibonacci series.
#include<stdio.h>
int main()
{
    int num,next,i,first=0,second=1;
    printf("enter your range of numbers : ");
    scanf("%d",&num);

    for(i=0;i<=num;i++)
    {
        if(i<=1)
        {
            next=i;
        }
    else
        {
        next=first+second;
        first=second;
        second=next;
        }
    printf("%d\n",next);

    }
return 0;
}
