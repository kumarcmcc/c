#include<stdio.h>
struct person
{
    char name[20];
    int age;
    float salary;

};
void display(struct person a)
{
    printf("Name :  %s\n",a.name);
    printf("Name :  %d\n",a.age);
    printf("Name :  %f\n",a.salary);
}
int Main()
{
    struct person person1;


  strcpy(person1.name,"Chandan Mondal");
    person1.age=29;
    person1.salary=15489.25;

    display(person1);




    getch();
}
