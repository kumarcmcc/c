#include<stdio.h>
int main()
{

    int r,num1,num2,temp,sum=0,i;
    printf("Enter inisial number  : ");
    scanf("%d",&num1);
      printf("Enter last number  : ");
    scanf("%d",&num2);
for (i=num1;i<=num2;i++)

{
        temp = i;

    while (temp!=0)
    {
       r=temp%10;
        sum = sum+r*r*r;
        temp=temp/10;
    }

    if(sum==i)
    {
        printf("%d\t",i);
    }
    sum=0;

}



  /*  if (num==sum)
        printf("Armstrong");
    else
        printf("Not");   */

}

