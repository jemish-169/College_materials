//Write a program that checks whether the string is palindrome or not using string library function.
#include<stdio.h>
#include<string.h>

void main()
{
    char i[100],j[100];
    int k,l=0,flag=0;

    printf("enter your string :");
    gets(i);

    for( (k=strlen(i)-1); k>=0; k--)
    {
        j[l]=i[k];
        l++;
    }
    j[l+1]='\0';
    puts(j);
    printf("%d\n",strlen(j));
    printf("%d\n",strlen(i));


   /* for(k=0; k<=strlen(i); k++)
    {
        if(i[k]!=j[k])
            {flag++;}

    }
    if(flag==0)
        printf("string is palindrome");
    else
        printf("string is not palindrome");*/

      flag = strcmp(i,j);
      if(flag==0)
        printf("it is palindrome");
      else
        printf("it is not palindrome");
}
