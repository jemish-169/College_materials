//Write a program to insert and delete an element to/from desired position in an array.
#include<stdio.h>
int main()
{
    int a[60],i,pos,j,val,size;
    printf("enter size of array :\n");
    scanf("%d",&size);
    printf("enter your 1D array : \n\n");
    for(i=0; i<size; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter that position where you want to enter element : \n");
    scanf("%d",&pos);
    printf("enter that value: ");
    scanf("%d",&val);

    for(i=size-1; i>=pos-1; i--)
    {
        a[i+1]=a[i];
    }
    a[pos-1]=val;
    size++;

    for(i=0; i<size; i++)
    {
        printf("%d\n",a[i]);
    }
    return 0;
}
