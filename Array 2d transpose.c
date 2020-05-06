#include<stdio.h>
int main()
{
    int i,j,row,col;
    int A[10][10],Trans[10][10];

    printf("Enter rows and column for First matrivc : ");
    scanf("%d %d",&row,&col);
//input
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            printf("A[%d][%d] : ",i,j);
            scanf("%d",&A[i][j]);
        }
        printf("\n");
    }

    //transpose
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            Trans[j][i] = A[i][j];
        }
    }

    //output

    printf("\nNormal Matric\n");
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            printf("%d\t",A[i][j]);
        }
        printf("\n");
    }

     //output transpose

    printf("\nTranspose Matric\n");
    for(i=0; i<col; i++)
    {
        for(j=0; j<row; j++)
        {
            printf("%d\t",Trans[i][j]);
        }
        printf("\n");
    }

}
