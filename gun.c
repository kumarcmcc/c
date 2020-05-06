#include<stdio.h>
int main()
{
    int i,n,eve=0,odd=0;
    printf("Enter last value  : ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
       if(i%2==0)
        eve = eve + i;
       else
        odd = odd + i;
    }


    printf("result = %d\n",odd-eve);



    getch();
}
