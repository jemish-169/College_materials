//Write a program to find length of string without using library function.
#include<stdio.h>
#include<string.h>
int main()
{
    char ch[50];
    int flag=0,i;

    printf("enter your string :\n");
    gets(ch);

    for(i=0; ch[i]!= '\0'; ++i)
    {
        flag++;
    }
    printf("%d",flag);
    printf("\n%d",strlen(ch));
    printf("\n%d",i);
}
