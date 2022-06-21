//Write a program that adds two 1-dimensional array& store into third array.
#include<stdio.h>
int main()
{
    int a[4],b[4],c[4],i,sum;

    printf("enter element of 1st array: \n");
    for(i=0; i<4; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter element of 2nd array: \n");
    for(i=0; i<4; i++)
    {
        scanf("%d",&b[i]);
    }

    for(i=1; i<=4; i++)
    {
        sum=0;
        sum=a[i-1]+b[i-1];
        printf("\t\nsum of %d element is %d", i,sum);
    }

}
