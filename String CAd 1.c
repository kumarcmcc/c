
#include<stdio.h>
int main()
{
   char S1[50]="My name is : ";
char S2[ ]="Chandan Kumar Mondal.";
int i=0,j=0,len=0;
while(S1[i]!='\0')
{
    i++;
    len++;
}
while(S2[j]!='\0')
{
    S1[len+j]=S2[j];
    j++;
}
printf("%c",S1);


//  String Revers

    printf("What is Your Full Name?\n%s\n",S1);

strrev(S1);
printf("\nRevers is : %s",S1);


}
