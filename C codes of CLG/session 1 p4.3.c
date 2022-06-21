#include<stdio.h>
void main()
{
int i,j,k,max;
printf("enter three value : ");
scanf("%d%d%d",&i,&j,&k);
max=(i>j)?(i>k?i:k):(j>k?j:k);
printf("MAXIMUM IS %d",max);
}
