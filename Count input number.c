#include<stdio.h>
int main()
{
    int num,cou=0;
    printf("Enter a number  :  ");
    scanf("%d",&num);

    while (num!=0)
    {
        num =num/10;
        ++cou;
    }
    printf("Total number of disit : %d\n",cou);



    return 0;

}
