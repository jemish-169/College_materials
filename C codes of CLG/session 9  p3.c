//Write a program to find factorial of a number using recursion.
#include<stdio.h>
int factorial=1;
int fact(int i)
{
    factorial *= i;
    --i;
    if(i>0)
    {
        fact(i);
    }

    return 0;
}

int main()
{
    int i;
    printf("enter your number :\n");
    scanf("%d",&i);
    fact(i);
    printf("%d",factorial);
    return 0;
}
