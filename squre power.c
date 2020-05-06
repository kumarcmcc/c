#include<stdio.h>
int main()
{

    int x ,y;
     printf("Enter first number : ");
    scanf("%d",&x);
     printf("Enter Second number : ");
    scanf("%d",&y);

    double result=pow(x,y);
    printf("The result is : %.1lf",result);
}
