/*1 2 3 4 5
    2 3 4 5
      3 4 5
        4 5
          5*/
#include<stdio.h>
void main()
{
    int i,j,num;

    printf("how many raws you want to print :");
    scanf("%d",&num);

    for(i=1;i<=num;i++)
    {
        for(j=1;j<=num;j++)
        {
           if(i<=j)
           {
                printf("%d",j);
           }
           else
            printf(" ");
        }
        printf("\n");
    }
}
