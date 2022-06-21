//Write a program convert character into Toggle character.
#include<stdio.h>
#include<string.h>
int main()
{
    char i[100];
    int j,k;
    printf("enter your string :");
    //scanf("%s",&i);
    gets(i);
    for(j=0; j<strlen(i); j++)
    {
        if('A'<=i[j] && i[j]<='Z')
            i[j] = i[j] + 32;
        else if('a'<=i[j] && i[j]<='z')
            i[j] = i[j] - 32;
        else
            i[j]=i[j];
    }
    printf("%s",i);
    return 0;
}
