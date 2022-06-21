//Write a program using pointer and function to determine the length of string
#include<stdio.h>
#include<conio.h>

int func(char*p)
{
    int flag=0;
    while(*p != '\0')
    {
        ++flag;
        p++;

    }
    return flag;
}

int main()
{
    char str[20];
    int length;

    printf("enter string :");
    gets(str);
    length=func(str);
    printf("%d",length);
}
