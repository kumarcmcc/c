#include<stdio.h>// conditional control statment
int main()
{
    int num;
    printf("Enter an intizer ");
    scanf("%d",&num);

    /*    if(num%2==0)
            printf("Even\n");
       if(num%2!=0)
            printf("Odd\n");    */
    if(num%2==0)
        printf("Even\n");
    else
        printf("Odd\n");




    return 0;

}
