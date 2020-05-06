
#include<stdio.h>
int main()
{
    int n,row,col;
    printf("Enter line no : ");
    scanf("%d",&n);

    for(row=1;row<=n;row++)
    {
        for(col=1;col<=row;col++)
       if(row==col||row==n||col==1)
            printf("* ");
        else
            printf("  ");

printf("\n");

    }

}
