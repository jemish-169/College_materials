//Write a program that use user defined function swap() to interchange the value of two variable.
#include<stdio.h>
int swap(int i, int j)
{
    int temp;
    temp=i;
    i=j;
    j=temp;

    printf("\nyour i= %d and j= %d\n",i,j);
    return i;
    return j;
}
int main()
{
    int i,j;
    printf("enter 2 values :\n");
    scanf("%d\n%d",&i,&j);
    printf("\nyour i= %d and j= %d\n",i,j);
    swap(i,j);
}
