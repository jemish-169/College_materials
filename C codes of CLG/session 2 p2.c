//Write a program to compute Fahrenheit from centigrade (f=1.8*c +32)
#include<stdio.h>
void main()
{
    float f,c;
    printf("enter your temperature in centigrade : ");
    scanf("%f",&c);

    f=((1.8*c)+32);
    printf("temperature in fahrenheit is %f",f);
}
