//Write a function power that computes x raised to the power y for integer x and y and returns double type value.
#include<stdio.h>
void function(double b,double p)
{
    double value=1;
    for(int i=1;i<=p;i++)
    {
        value = value*b;

    }
    printf("%lf",value);

}
int main()
{
    double b,p;

    printf("enter your base value: ");
    scanf("%lf",&b);
    printf("enter your power of base value: ");
    scanf("%lf",&p);

    function(b,p);

}
