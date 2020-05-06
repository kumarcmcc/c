
#include<stdio.h>
int main()
{
  /*    int x = 5;
   int *ptr;
   ptr = &x;

   printf("%d\n",x);
    printf("%d\n",&x);
     printf("%d\n",ptr);
     printf("%d\n",*ptr);
     printf("%d\n",&ptr);     */


/*     int x=10,y=20,z=30;
     int *ptr;

     ptr = &x;
     printf("X = %d\n",*ptr);

        ptr = &y;
     printf("Y = %d\n",*ptr);

        ptr = &z;
     printf("Z = %d\n",*ptr);     */


 int x=10,y=20,sum;

int *ptr1,*ptr2;

ptr1=&x;
ptr2=&y;
sum=*ptr1+*ptr2;
printf("Sum = %d\n",sum);







 getch();
}
