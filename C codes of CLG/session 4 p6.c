/*
AAAAA
BBBB
CCC
DD
E
*/
#include<stdio.h>
void main()
{
    char i,j,alphabet;

    printf("hoe many alphabet yo want to print.");
    scanf("%C",&alphabet);

    if(alphabet>60 && alphabet<95)
     {
             for(i='A';i<=alphabet;i++)
    {
        for(j=alphabet;j>=i;j--)
        {
              printf("%c",i);
                  }
        printf("\n");
    }
    }
    else
        printf("enter valid number");
}

