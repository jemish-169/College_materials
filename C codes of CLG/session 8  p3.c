//Write a calculator program (add, subtract, multiply, divide). Prepare user defined function for each functionality.
#include<stdio.h>
int sum(int i,int j)
{
    int a;
    a=i+j;
    printf("%d",a);

}
int div(int i,int j)
{
    int a;
    a=i/j;
    printf("%d",a);

}
int sub(int i,int j)
{
    int a;
    a=i-j;
    printf("%d",a);

}
int mul(int i,int j)
{
    int a;
    a=i*j;
    printf("%d",a);

}
int main()
{
    int i,j;
    char sign;

    printf("choose operation among +,-,/,*  :");
    scanf("%c",&sign);
    printf("enter 2 numbers : \n");
    scanf("%d%d",&i,&j);

    switch (sign)
    {
    case '+' :
        sum(i,j);
        // printf("hy");
        break;

    case '-' :

        sub(i,j);
        break;

    case '*' :

        mul(i,j);
        break;

    case '/' :

        div(i,j);
        break;

    default :

        printf("enter valid operation");

    }
}
