#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter First number : ");
    scanf("%d",&x);
     printf("Enter First number : ");
    scanf("%d",&y);



    if (x>y)
        printf("The Upper number is %d\n",x);
    else   if (y>x)
        printf("The Upper number is %d\n",y);
    else
        printf("same type");
}
