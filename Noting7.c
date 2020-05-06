#include<stdio.h>
int main()
{
    int A[10][10],i,j,sum=0,n;

 printf("Enter rows and column : ");
    scanf("%d ",&n);






    printf("\nEnter the Element for the matric : \n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("A[%d][%d]",i,j);
            scanf("%d",&A[i][j]);
        }
        printf("\n");
    }

     printf("\nEntered matric : \n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",A[i][j]);

        }
        printf("\n");
    }

    //sum of dioganal
    printf("Printing dioganal Elements : " );
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
          if(i==j)
          {
              printf("%d ",A[i][j]);
              sum=sum+A[i][j];
          }

        }
    }
printf("\nSum of dioganal is : %d\n",sum);


}
