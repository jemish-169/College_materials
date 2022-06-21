//Write a C program to find 1+1/2!+1/3!+1/4!+. ....... +1/n!.
#include<stdio.h>
void main()
{
    int i,j=1,num;
    float sum=0,result,mul=1;

    printf("how many terms you want to calculate : ");
    scanf("%d",&num);

    for(i=1;i<=num;i++)
    {
       for(j=1;j<=i;j++)
        {
            mul*=j;
        }
        result = (1/mul);
        sum+=result;
        mul=1;
    }
    printf("result of this expression is %0.2f",sum);
}



