
#include<stdio.h>
int main()
{
  //   char s1[]="MyNameIsChandan";
   char s1[30];
    printf("Enter your name :  ");
    gets(s1);
   int i=0,len=0;

   while(s1[i]!='\0')
   {
       i++;
       len++;
   }

 printf("The lenth Is : %d",len);

}
