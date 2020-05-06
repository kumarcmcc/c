
#include<stdio.h>
struct person
{

    char name[50];
    int age;
    float salary;
};
int main()
{
    struct person person[4];
    int i;

    for (i=0;i<4;i++)
    {
        printf("Enter information for person %d\n",i+1);

        printf("Enter Name : ");
        fflush(stdin);
        gets(person[i].name);

        printf("Enter Age : ");
        scanf("%d",&person[i].age);


        printf("Enter Salary : ");
        scanf("%f",&person[i].salary);
        printf("\n");
    }

      for (i=0;i<4;i++)
    {
        printf("\n\nInformation for person %d\n",i+1);

        printf("Age : %s\n",person[i].name);
        printf("Age : %d\n",person[i].age);
         printf("Salary : %.2f\n",person[i].salary);

    }





}
