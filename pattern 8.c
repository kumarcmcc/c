#include<stdio.h>
int main()
{
    int n,row,col;
    printf("Enter Last number : ");
    scanf("%d",&n);

    for(row=n;row>=1;row--)
    {
        for(col=1;col<=n-row;col++)
        {
            printf(" ");
        }
        for(col=1;col<=row;col++)
        {
            printf("%d",col);

        }
        printf("\n");
    }

        for(row=2;row<=n;row++)
    {
        for(col=1;col<=n-row;col++)
        {
            printf(" ");
        }
        for(col=1;col<=row;col++)
        {
            printf("%d",col);

        }
        printf("\n");
    }


    return 0;
}