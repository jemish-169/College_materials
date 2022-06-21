//Write a program to reverse a number.
#include<stdio.h>
int main()
{
    int n,reverse=0,rem;
    printf("enter your number : ");
    scanf("%d",&n);

    while(n!=0)
    {
     rem=n%10;
     reverse=reverse*10+rem;
     n/=10;
    }

printf("reversed number is %d",reverse);
return 0;
}

