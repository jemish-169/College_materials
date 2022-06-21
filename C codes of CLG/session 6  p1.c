//Write a program for multiplication of two matrices.
#include<stdio.h>
int main()
{
    int a[40][40],b[40][40],C[40][40],i,j,r,c,k,l;

    printf("enter number of raws of 1st matrix :\n");
    scanf("%d",&r);
    printf("enter number of columns of 1st matrix :\n");
    scanf("%d",&c);
    printf("enter your 2D matrix :\n");
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    printf("enter number of raws of 2nd matrix :\n");
    scanf("%d",&r);
    printf("enter number of columns of 2nd matrix :\n");
    scanf("%d",&c);
    printf("enter your 2D matrix :\n");
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            C[i][j]=0;
            for(k=0; k<c; k++)
            {
                C[i][j]+=a[i][k]*b[k][j];
            }
        }

    }
    for(k=0; k<r; k++)
    {
        for(l=0; l<c; l++)
        {
            printf("%d\t",C[k][l]);
        }
        printf("\n");
    }
    return 0;
}


