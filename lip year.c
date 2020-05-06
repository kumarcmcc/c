
#include<stdio.h>
int main()
{

    int a;

    printf ("Enter a year : ");
    scanf("%d",&a);
    if (a %400==0)
        printf("Leapyear");
    else if(a%4==0 && a%100!=0)
        printf("Leapyear");
    else
        printf("not Lappyear");



    getch();
}
