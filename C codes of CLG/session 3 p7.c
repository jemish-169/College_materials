//Write a program to check whether the given number is prime or not.
#include<stdio.h>
int main()
{
    int i,num,result,flag=0;
    printf("enter your number : ");
    scanf("%d",&num);

    for(i=1;i<=num;i++)
    {
        result=num%i;
        if(result==0)
        {
            flag++;
        }
    }
   if(flag==2)
    printf("it is a prime number.");
   else
    printf("it is not prime number.");


}
