//Write a C program to find the sum and average of different numbers which are accepted by user as many as user wants.
#include<stdio.h>
int main()
{
    int count=1,num;
    float x,average,sum=0;

    printf("how many terms you want to enter: ");
    scanf("%d",&num);

    while(count<=num)
    {
        printf("enter the %d number: ",count);
        scanf("%f",&x);
        sum+=x;
        ++count;
    }
    average = sum/num;
    printf("\n the average is %f\n",average);
    printf("\n the sum is %f\n",sum);

    return 0;
}
