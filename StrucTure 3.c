
#include<stdio.h>
struct person
{
    char name[20];
    int age;
    float salary;
};

void display(struct person p)
{
    printf("Name : %s\n",p.name);
    printf("Name : %d\n",p.age);
    printf("Name : %.2f\n\n\n",p.salary);
}


int main()
{
struct person person1,person2;
strcpy(person1.name,"Chandan");
person1.age=27;
person1.salary=63225.23;
display(person1);

strcpy(person2.name,"Toma");
person2.age=20;
person2.salary=5565.23;
display(person2);

}
