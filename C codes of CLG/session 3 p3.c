//Write a C program to find factorial of a given number.
#include<stdio.h>
void main()
{
    int i=1,n,result=1;
    printf("enter your value : ");
    scanf("%d",&n);

    while(i<=n)
    {
    result=result*i;
    i++;
    }
    printf("factorial is %d",result);


}
