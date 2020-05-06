#include<stdio.h>
int main ()
{
    int x=10;

    printf("%d\n",x++);//10
    printf("%d\n",x);//11
    printf("%d\n",++x);//12
    printf("%d\n",x);//12
    printf("%d\n",x--);//12
    printf("%d\n",--x);//10
    printf("%d\n",--x);//9
     printf("%d\n",x);//9



    return 0;
}
