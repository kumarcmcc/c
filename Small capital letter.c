
#include<stdio.h>
int main()
{
    char ch;
    printf ("Enter First letter : ");
    scanf("%c",&ch);

    if (ch>='A' && ch<='Z')
        printf("Capital");
    else if (ch>='a' && ch<='z')
        printf("Small");
    else
       printf ("Thi is not a letter.");
    getch();
}
