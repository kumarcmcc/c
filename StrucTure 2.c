#include<stdio.h>
struct person
{
    int age;
    float salary;
};
int main()
{
    struct person person1={27,54788.258};
    struct  person person2,person3;

    person2.age=25;
    person2.salary=35665.355;
    person3=person2;


    printf ("person 1 \n");
    printf("Age = %d\n",person1.age);
    printf("Salary = %.2f\n",person1.salary);



    printf ("\n\nperson 2 \n");
    printf("Age = %d\n",person2.age);
    printf("Salary = %.2f\n",person2.salary);


    printf ("\n\nperson 3 \n");
    printf("Age = %d\n",person3.age);
    printf("Salary = %.2f\n",person3.salary);


}
