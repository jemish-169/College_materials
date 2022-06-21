//Write a C program to enter a distance in to kilometre and convert it in to meter, feet, inches and centimeter.
#include<stdio.h>
void main()
{
    float km,m,inch,feet,cm;
    printf("Enter your distance in kilometer : ");
    scanf("%f",&km);

    m=1000*km;
    cm=100*m;
    inch=2.56*cm;
    feet=30*cm;
    printf("entered distance in meter = %f\n in centimeter is %f \n in feet is %f \n in inch is %f \n ",m,cm,inch,feet);
}
