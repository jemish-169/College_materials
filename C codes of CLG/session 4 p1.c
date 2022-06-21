//Write a program to evaluate the series 1^2+2^2+3^2+……+n^2
#include<stdio.h>
int main()
{
    int i,j,num;
    float sum=0;

    printf("enter number of terms :");
    scanf("%d",&num);

    for(i=1;i<=num;i++)
    {
      j=(i*i);
    sum+=j;
    }
    printf("answer is %f",sum);
    return 0;
}
