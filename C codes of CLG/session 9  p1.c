//Write a program to find sum of elements of 1-D Array using Function.
#include<stdio.h>
int main()
{
 int a[10],sum=0;
 printf("enter array elements :\n");
 for(int i=0;i<10;i++)
 {
    scanf("%d",&a[i]);
 }

 for(int j=0;j<10;j++)
 {
    sum += a[j];
 }
 printf("your sum of 1D array is %d",sum);
return 0;
}
