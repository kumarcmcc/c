#include<stdio.h>
union test1   //4byte
{
    int x,y;
};
union test2    //4byte
{
    char ch;   //1byte
    int x;        //4byte
};
union test3     //20byte
{
    char name[20];  //20byte
    double d;           //8byte
};
struct test4
{
    int x;
    int y;
    char ch;
    double z;
};
int main ()
{
    union test1 t1;
    union test2 t2;
    union test3 t3;
    struct test4 t4;


   printf("sizeof(t1) = %d\n",sizeof(t1));
    printf("sizeof(t2) = %d\n",sizeof(t2));
     printf("sizeof(t3) = %d\n",sizeof(t3));
      printf("sizeof(t4) = %d\n",sizeof(t4));


    getch();
}
