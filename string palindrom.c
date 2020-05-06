#include<stdio.h>
int main()
{
 //   char s1[30]="madam";
 char s1[30];
    printf("Enter your name :  ");
    gets(s1);
      char s2[30];
     int i=0,len=0,j;
     while(s1[i]!='\0')
     {
         i++;
         len++;
     }
     for(j=0,i=len-1 ;i>=0;   i--,  j++)
     {
       s2[j]=s1[i];
     }
     s2[j]='\0';



   printf("The Main Is : %s\n",s1);
   printf("The revers Is : %s",s2);

   int d = strcmp(s1,s2);

   if(d==0)
     printf(" Is Palandrom");
   else
    printf(" Is Not palandrom");
}
