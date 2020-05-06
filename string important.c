
#include<stdio.h>
int main()
{
    char str[100],ch;
    int i,vow,con,dig,wor,oth;

    printf("Enter a string : ");
    gets(str);

    i=vow=con=dig=wor=oth=0;

    while((ch=str[i])!='\0')
    {
        if(ch=='a' ||ch=='e' ||ch=='i' ||ch=='o' ||ch=='u'||
           ch=='A' ||ch=='E' ||ch=='I' ||ch=='O' ||ch=='U')
       vow++;

       else if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z'))
        con++;

        else if (ch>='0' && ch<='9')
            dig++;

        else if(ch==' ')
            wor++;

        else
            oth++;




        i++;
    }
    wor++;

    printf("No of Vowels = %d\n",vow);
    printf("No of Consonants = %d\n",con);
    printf("No of WOrds = %d\n",wor);
    printf("No of Digits = %d\n",dig);
    printf("No of Others = %d\n",oth);
   printf("No of Total = %d\n",vow+con+wor+dig+oth);

}
