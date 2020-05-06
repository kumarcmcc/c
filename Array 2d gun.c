

#include<stdio.h>
int main()
{
    int i,j,k,r1,r2,c1,c2,sum=0;
    int A[10][10],B[10][10],C[10][10];

    printf("Enter rows and column for First matrivc : ");
    scanf("%d %d" ,&r1,&c1);

    printf("Enter rows and column for Second matrivc : ");
    scanf("%d %d" ,&r2,&c2);

 while (c1!=r2)
    {
        printf("Error !! column of first matric not equalto row of second \n");

        printf("Enter row and column for first matrix : ");
        scanf("%d %d ",&r1,&c1);

        printf("Enter row and column for first matrix : ");
        scanf("%d %d ",&r2,&c2);
    }

//A  input
printf("\nEnter element for first matric\n");
for(i=0; i<r1; i++)
    {
        for(j=0; j<c1; j++)
        {
            printf("A[%d][%d]  = ",i,j);
            scanf("%d",&A[i][j]);


        }

printf("\n");
    }

    //B  input
  printf("\nEnter element for Second matric\n");
for(i=0; i<r2; i++)
    {
        for(j=0; j<c2; j++)
        {
            printf("B[%d][%d]  = ",i,j);
            scanf("%d",&B[i][j]);

        }
 printf("\n");
    }

//C input
for(i=0;i<r1;i++)
{
    for(j=0;j<c2;j++)
    {
        for(k=0;k<c1;k++)
        {
            sum=sum+A[i][k]*B[k][j];

        }
         C[i][j]=sum;
            sum=0;

    }

}

//A out put
printf("\n\nA output is : \n\n");
    for(i=0; i<r1; i++)
    {

        for(j=0; j<c1; j++)
        printf("%d ",A[i][j]);
        printf("\n");
    }

    //B out put

   printf("\n\nB output is :\n\n");
    for(i=0; i<r2; i++)
    {

        for(j=0; j<c2; j++)
        printf("%d ",B[i][j]);
        printf("\n");
    }

    // C out put
 printf("\n\nC output is :\n\n");
    for(i=0; i<r1; i++)
    {

        for(j=0; j<c2; j++)
        printf("%d ",C[i][j]);
        printf("\n");
    }

    return 0;
}
