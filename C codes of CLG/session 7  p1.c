//Write a program that reads a string and counts occurrences of a given character.
#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,found=0,k;
    char a[100];

    printf("enter your string: \n");
    gets(a);

    printf("enter a alphabet you want to find :\n");
    scanf("%s",&j);


    while(i<strlen(a))
    {
        if(a[i]==j)
           {
             printf("it is at %d\n",i+1);
             found++;
           }
        i++;

    }

    if(found==0)
        printf("character is not found..!!");
    return 0;
}
