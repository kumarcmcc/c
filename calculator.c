
#include<stdio.h>
int main()
{
    double num1,num2;
    char oper;


    printf("Enter An operator (+ , - , * , / )  :\n");
    scanf("%c",&oper);

    printf("Enter two number : ");
    scanf("%lf %lf",&num1,&num2);

    switch(oper)
    {
    case '+' :
    {
        printf("%.2lf + %.2lf = %.2lf\n ",num1,num2,num1+num2);


        break;
    }
    case '-' :
    {
        printf("%.2lf - %.2lf = %lf.2\n ",num1,num2,num1-num2);


        break;
    }
    case '*' :
    {
        printf("%.2lf * %.2lf = %.2lf\n ",num1,num2,num1*num2);


        break;
    }
    case '/' :
    {
        printf("%.2lf / %.2lf = %.2lf\n ",num1,num2,num1/num2);


        break;
    }
    default :
        printf(" Not a Valid operator  \n");


    }
}
