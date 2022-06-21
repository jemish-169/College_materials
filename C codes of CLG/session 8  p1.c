//Write a C Program to demonstrate the use of inbuilt string functions
#include<stdio.h>
#include<string.h>
int main()
{
char i[100],j[100],l[100],m[100];
int k;

printf("enter your string 1: ");
gets(i);
printf("enter your string 2: ");
gets(j);

printf("\n\n");

printf("your string 1 is :");
puts(i);
printf("your string 2 is :");
puts(j);

printf("\n\n");

printf("length of string 1 is %d\n",strlen(i));
printf("length of string 2 is %d\n",strlen(j));

printf("\n");

k=strcmp(i,j);
if(k==0)
    printf("\nboth are equal");
else
    printf("it is not equal\n");

printf("\n\n");
 strcpy(l,i);
 printf("string 3 is:");
 puts(l);

printf("\n\n");

strcat(i,j);
puts(i);

printf("\n\n");

strupr(l);
puts(l);

printf("\n\n");

strlwr(j);
puts(j);

printf("\n\n");
printf("*******THANK YOU*******");
return 0;
}
