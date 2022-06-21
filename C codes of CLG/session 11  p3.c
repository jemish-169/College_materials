//Write a program to demonstrate the concept of pointer.
#include<stdio.h>
#include<conio.h>

int main()
{
    int *i,j;
    printf("enter number");
    scanf("%d",&j);

    i=&j;

    printf("%d\t",i);

    printf("%d\t",*i);

    printf("%d\t",&j);

    printf("%d\t",j);
}
