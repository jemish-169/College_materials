//Write a C program to find that the accepted number is Negative, or Positive or Zero.
#include<stdio.h>
void main()
{
    int i;
    printf("enter your integer : ");
    scanf("%d",&i);

    if(i>0)
        printf("\nthis number is positive.");
    if(i<0)
        printf("\nthis number is negative.");
    if(i==0)
        printf("\nthis number is zero.");
}
