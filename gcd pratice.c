#include<stdio.h>
int main()
{
    int num1,num2,n1,n2,rem,gcd,lcm;     //  n1  n2  60  30
    printf("Enter FIrst number  :  ");
    scanf("%d",&num1);
    printf("Enter second Number  :  ");
    scanf("%d",&num2);

    n1 = num1;
    n2 = num2;
    while (n2!=0)
    {
        rem =n1  % n2;
        n1 = n2;
        n2 = rem;
    }
    gcd=n1;
    lcm=(num1*num2)/gcd;

    printf("GCD =%d\n",gcd);
    printf("LCM =%d\n",lcm);




    return 0;
}
