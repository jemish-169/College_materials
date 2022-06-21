//Write a program to sort a given array in ascending order. (use Bubble Sort algorithm)
#include<stdio.h>
int main()
{
    int a[40],i,size,temp,j;
    printf("enter size of array :\n");
    scanf("%d",&size);
    printf("enter your 1D array : \n\n");
    for(i=0; i<size; i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0; i<size-1; i++)
    {
        for(j=0; j<size-1; j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("\n\n");
    for(i=0; i<size; i++)
    {
        printf("%d\n",a[i]);
    }

    return 0;
}
