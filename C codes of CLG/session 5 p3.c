//Write a program to insert and delete an element to/from desired position in an array.
#include<stdio.h>
int main()
{
    int i,j,a[10],k;

    printf("enter a array elements: \n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter your desired position where you want to insert ");
    scanf("%d",&j);

    printf("enter your new integer :");
    scanf("%d",&k);

    a[j-1]=k;
    printf( "new array is: \n");
    for(i=0;i<10;i++)
    {
        printf("\n%d",a[i]);
    }
    return 0;
}
