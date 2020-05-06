
#include<stdio.h>
int main()
{
    char str[50],ch;
    int i,cap,sm,dig;
    i = cap = sm = dig = 0;

    printf("Enter the string : ");
    gets(str);

    while((ch=str[i])!='\0')
    {
        if(ch>=65 && ch<=90)
            cap++;

           else if(ch>=97 && ch<=120)
            sm++;

             else if(ch>=48 && ch<=57)
            dig++;




        i++;
    }
    printf("No of capital Letter : %d\n",cap);
printf("No of Small Letter : %d\n",sm);
printf("No of Digit Letter : %d\n",dig);

}
