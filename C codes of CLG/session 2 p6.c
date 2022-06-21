//Write a C program to check whether the entered character is capital, small letter, digit or any special character.
#include<stdio.h>
void main()
{
    char i;
    printf("enter your integer : ");
    scanf("%c",&i);

    if(i>='a' && i<='z')
        printf("entered integer is SMALL LETTER");
    else if(i>='A' && i<='Z')
        printf("entered integer is CAPITAL LETTER");
    else if(i>='0' && i<='9')
        printf("entered integer is INTEGER");
    else
        printf("It is a special character OR any another character.");


}
