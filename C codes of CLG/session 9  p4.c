//Write a program to generate Fibonacci series using recursion.
int value=0;
#include<stdio.h>
int fib(int n)
{
    if(n==0)
        return 0;
    else if(n==1)
        return 1;
    else
        return (fib(n-1) + fib(n-2));

    return 0;
}
int main()
{
    int i=0,n,c;
    printf("how many terms you  want in Fibonacci series : \n");
    scanf("%d",&n);
    printf("Fibonacci series :\n");
    for(c=1; c<=n; c++)
    {
        printf("%d\n",fib(i));
        i++;
    }
    return 0;
}
