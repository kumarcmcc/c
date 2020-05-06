

#include<stdio.h>
int main()
{
    int n,row,col,cou=0;
    printf("Enter Number : ");
    scanf("%d",&n);

    for(row=1;row<=n;row++)
 {


          for(col=1;col<=row;col++)

        printf("%d  ",++cou);

        printf("\n");
    }

  /*      for(row=n-1;row>=1;row--)
 {
        for(col=1;col<=n-row;col++)
        printf(" ");

          for(col=1;col<=row;col++)
        printf("%d ",col);

        printf("\n");
    }
*/




    return 0;
}
