#include<stdio.h>
int main()
{
 //   char s1[]="C programing";
   char s1[30];
    printf("Enter your name :  ");
    gets(s1);
    char s2[20];
    strcpy(s2,s1);
    printf("S1 =%s\n",s1);
      printf("S2 = %s",s2);
}
