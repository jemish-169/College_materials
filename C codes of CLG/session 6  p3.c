//Write a program to concatenate two strings without using library function.
#include<stdio.h>
int main()
{
    int i=0,j=0,length;
    char a[100],b[100],c[100];

    printf("enter 1st string:\n");
    scanf("%s",a);
    printf("enter 2nd string :\n");
    scanf("%s",b);

    while(a[i] != '\0')
    {
        c[j] = a[i];
        i++;
        j++;
    }
    i = 0;
    while(b[i] != '\0')
    {
        c[j] = b[i];
        i++;
        j++;
    }
    c[j]='\0';

    printf("%s",c);
    return 0;
}
