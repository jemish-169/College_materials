#include<stdio.h>
void main()
{
int i=16,j=12,k,l,m,n;
k=i++;
l=i--;
m=++j;
n=--j;
printf("\n POST increment is %d",k);
printf("\n POST decrement is %d",l);
printf("\n Pre increment is %d",m);
printf("\n Pre decrement is %d",n);

}


