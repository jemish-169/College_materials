//program to find area of triangle.
#include<math.h>
#include<stdio.h>
int main()
{
float s1,s2,s3,sp,area;
printf("Enter three sides of triangle : \n");
scanf("%f %f %f",&s1,&s2,&s3);

    sp = (s1+s2+s3)/2;

    area = sqrt (sp *(sp-s1)*(sp-s2)*(sp-s3));
    printf("area of the triangle is %3f",area);

    return 0;
}
