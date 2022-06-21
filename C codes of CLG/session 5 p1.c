//Write a program to read array of integers and print it in reverse order.

#include<stdio.h>
int main()
{
    int i[10],n;

    for(n=1; n<=10; n++)
    {
        printf("enter %d number :",n);
        scanf("%d",&i[n-1]);
    }

    for(n=10; n>=1; n--)
    {
        printf("\n%d",i[n-1]);
    }
    return 0;

}
