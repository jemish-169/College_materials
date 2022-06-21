/*draw the following pattern.
****
***
**
*   */

#include<stdio.h>
void main()
{
    int i,j,num;

    printf("how many raws you want to print.");
    scanf("%d",&num);

    for(i=1;i<=num;i++)
    {
        for(j=num;j>=i;j--)
        {
            printf("*");
        }
        printf("\n");
    }
}



