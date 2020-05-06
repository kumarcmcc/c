#include<stdio.h>
int main()
{
    int A[3][3],i,j,uppersum=0,lowersum=0;

    printf("\nEnter the Element for the matric : \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("A[%d][%d]",i,j);
            scanf("%d",&A[i][j]);
        }
        printf("\n");
    }

     printf("\nEntered matric : \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",A[i][j]);

        }
        printf("\n");
    }

    //sum of upper lowerdioganal

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
          if(i<j)
          {

              uppersum=uppersum+A[i][j];
          }
           if(i>j)
          {

              lowersum=lowersum+A[i][j];
          }


        }
    }
printf("\nSum of upper is : %d\n",uppersum);
printf("\nSum of lower is : %d\n",lowersum);


}
