#include<stdio.h>
int main()
{
    int n,row,col;
    printf("Enter line no : ");
    scanf("%d",&n);

    for(row=1;row<=n;row++)
    {
        for(col=1;col<=row;col++)
        {
   printf("1");
        }
       printf("\n");
    }
}
