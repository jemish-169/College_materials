/*draw the following pattern.
1
01
101
0101
10101   */

#include<stdio.h>
void main()
{
    int i,j,rem1,rem2,rem3,num;

    printf("how many raws you want :");
    scanf("%d",&num);

    for(i=1;i<=num;i++)
    {
        for(j=1;j<=i;j++)
        {
           rem1 = i%2;
           if(rem1 == 0)
           {
            rem2 = j%2;
               if(rem2==0)
                  printf("1");
                else
                    printf("0");
           }
           else
            {
            rem3 = j%2;
               if(rem3==0)
                  printf("0");
                else
                    printf("1");
           }


        }
        printf("\n");
    }
}


