#include<stdio.h>
int main()
{
   // char s1[]="MyNameIsChandan";
     char s1[30];
    printf("Enter your name :  ");
    gets(s1);
    int len=strlen(s1);

    printf("Lenth of string Is : %d\n",len);

}
