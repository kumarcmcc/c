#include<stdio.h>
int main()
{
      char s1[30];
    printf("Enter your name :  ");
    gets(s1);


  //  char s1[]="Chandan";
    int i=0;
    while(s1[i]!='\0')
    {
        printf("%c\n",s1[i]);
        i++;
    }
}
