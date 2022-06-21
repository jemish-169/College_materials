/*Define a structure to enter enrollment number, name of student and marks of the student in three subjects.
Enter data for 5 students. Display grade cards of all students. Display student who has top rank in the
class.*/
#include<stdio.h>
#include<math.h>
#include<conio.h>
int sum(int x,int y,int z)
{
    int sum=0;
    sum=x+(y+z);
}
struct student
{
    int long enrollment_number;
    char* name;
    int physics;
    int pwc;
    int oop;
} s[3];
int main()

{
    int i,j,k;
    int avg[3];
    for(i=0; i<=2; i++)
    {

        printf("\nenter student name: ");
        scanf("%s",&s[i].name);
        printf("\nenter enrollment number : ");
        scanf("%d",&s[i].enrollment_number);
        printf("\nenter phy,pwc,oop marks : \n");
        scanf("%d%d%d",&s[i].physics,&s[i].pwc,&s[i].oop);
        if(s[i].physics > 100 || s[i].pwc >100 || s[i].oop > 100)
        {
            printf("marks and name is not valid re-enter %d students' detail:\n ",i+1);
            i--;
        }
        for(k=1;k<10;k++)
        {
            printf("\t*");
        }
    }
    for(i=0; i<=2; i++)
    {
        k=sum(s[i].physics,s[i].pwc,s[i].oop);
        printf("\nsum of student %d is : %d",i+1,k);
        avg[i]=sum(s[i].physics,s[i].pwc,s[i].oop)/3;
        printf("\taverage of student %d is %d",i+1,avg[i]);

        if(s[i].physics<=40 || s[i].pwc<=40 || s[i].oop<=40)
            printf("student is failed.");
        else if(s[i].physics<=60 || s[i].pwc<=60 || s[i].oop<=60)
            printf("student got grade C");
        else if(s[i].physics<=80 || s[i].pwc<=80 || s[i].oop<=80)
            printf("student got grade B");
        else if(s[i].physics<=100 || s[i].pwc<=100 || s[i].oop<=100)
            printf("student got grade A");
        else
            printf("it is not valid marks.");
    }
    j=fmax(avg[0],fmax(avg[1],avg[2]));
    printf("\n\n maximum of 3 students is %d",j);
    return 0;
}
