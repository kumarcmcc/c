#include<stdio.h>
int main()
{
    int num,sum=0,temp,r;
    printf("Enter number : ");
    scanf("%d",&num);

    temp= num;


   while (temp != 0)
    {
        r=temp%10;
        sum = sum+r;
        temp =  temp/10;
        }


     printf ("The Number is : %d\n",sum);

    return 0;
}
