#include<stdio.h>
struct person
{
    int age;
    float salary;
};
int main()
{
    struct person person1,person2,person3;
  printf("Enter information for person 1\n");
    printf("Enter Age  : ");
    scanf("%d",&person1.age);

    printf("Enter Salary  : ");
    scanf("%f",&person1.salary);

    printf ("\n\nperson 1 \n");
    printf("Age = %d\n",person1.age);
    printf("Salary = %.2f\n",person1.salary);


    printf("\n\nEnter information for person 2 \n");
    printf("Enter Age  : ");
    scanf("%d",&person2.age);

    printf("Enter Salary  : ");
    scanf("%f",&person2.salary);
    printf ("\n\nperson 2 \n");
    printf("Age = %d\n",person2.age);
    printf("Salary = %.2f\n",person2.salary);


    printf("\n\nEnter information for person 3\n");
    printf("Enter Age  : ");
    scanf("%d",&person3.age);

    printf("Enter Salary  : ");
    scanf("%f",&person3.salary);
    printf ("\n\nperson 2 \n");
    printf("Age = %d\n",person3.age);
    printf("Salary = %.2f\n",person3.salary);


}
