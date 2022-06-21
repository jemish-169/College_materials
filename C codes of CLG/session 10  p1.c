//Write a function which takes a two integer array as argument and give sum of these arrays.
#include<stdio.h>
int sum(int,int );
int main()
{
    int a[10],b[10],c[10];
    int i,num;
    printf("how long array you want to create : \n");
    scanf("%d",&num);
    printf("Enter your 1st array : \n");
    for(i=0; i<num; i++)
    {
        scanf("\n%d",&a[i]);
    }
    printf("Enter your 1st array : \n");
    for(i=0; i<num; i++)
    {
        scanf("\n%d",&b[i]);
    }
    for(i=0; i<num; i++)
    {
        c[i]=sum(a[i],b[i]);
        // printf("your sum of %d element is %d\n",i+1,sum(a[i],b[i]));
    }
    for(i=0; i<num; i++)
    {
        printf("\n%d",c[i]);
    }
    return 0;
}
int sum(int x,int y)
{
    return x+y;
}
