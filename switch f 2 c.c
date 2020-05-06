#include<stdio.h>
int main()
{
    int chose;
    float temp,convertTemp;
    printf("Temputare convert Menu\n");
    printf("1. Farenheit to Celsius\n");
    printf("2. Celsius to  Farenheit\n");
    printf("Enter your Choise");
    scanf("%d",&chose);

    switch(chose)
    {
    case 1:
    {
        printf("Enter Fahranhit Tempature : ");
        scanf("%f",&temp);
        convertTemp = (temp-32)/1.8;
        printf("The Tempature in celsius is : %f\n",convertTemp);
        break;
    }

    case 2:
    {
        printf("Enter Celcies Tempature : ");
        scanf("%f",&temp);
        convertTemp = (1.8*temp)+32;
        printf("The Tempature in Fahranhit is : %f\n",convertTemp);
    }
    default:
        printf("Not a correct optipon");
    }

}
