//Write a program to add elements of array using pointer.

#include<stdio.h>
#include<conio.h>

int main()
{
    int a[19],j,sum=0;

    printf("how many number you want to enter :");
    scanf("%d",&j);

    for(int i=0; i<j; i++)
    {
        printf("enter %d number :",i+1);
        scanf("%d",&a[i]);
    }

    for(int k=0;k<j;k++)
    {
        sum+=a[k];
    }

printf("\n\nsum of %d number is %d",j,sum);
return 0;
}
