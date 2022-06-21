//Write a C program demonstrate functionality of calculator using switch-case.
#include<stdio.h>
void main()
{
    int i,j;
    char c;
    printf("enter your two integers : ");
    scanf("\n%d\n%d",&i,&j);
    printf("enter arithmetic function(+,-,/,*,%) : ");
    scanf("\n%c",&c);

    switch(c)
    {
    case'+':
        {
            printf("\naddition of these two integers is %d",i+j);
            break;
        }
    case'-':
        {
            printf("\nsubstraction of these two integers is %d",i-j);
        break;
        }
    case'/':
        {
            printf("\ndivision of these two integers is %d",i/j);
        break;
        }
    case'*':
        {
            printf("\nmultiplication of these two integers is %d",i*j);
        break;
        }
    case'%':
        {
            printf("\nmodulation of these two integers is %d",i%j);
        break;
        }
    default :
    {
            printf("\nenter valid function.");
    }
}

}
