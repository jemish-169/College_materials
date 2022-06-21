/*Write a program to calculate simple interest (i = (p*r*n)/100 ). Where i = Simple interest p
= Principal amount r = Rate of interest n = Number of years.*/
#include<stdio.h>
#include<math.h>
void main()
{
    int i,p,r,n;

    printf("enter your amount : ");
    scanf("%d",&p);
     printf("enter your rate of intrest : ");
    scanf("%d",&r);
     printf("enter your duration : ");
    scanf("%d",&n);

    i=(p*r*n)/100;
    printf("your intrest on your amount is %d",i);

}
