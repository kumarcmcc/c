#include<stdio.h>
int main()
{

    int a,b,c;
    printf ("Enter First Number : ");
    scanf("%d",&a);
    printf ("Enter Second Number : ");
    scanf("%d",&b);
    printf ("Enter Third Number : ");
    scanf("%d",&c);



    if (a<b && a<c)
        printf("Small number = %d\n",a);
    else if (b<a  && b<c)
        printf("Small number = %d\n",b);
    else if (c<a  && c<b)
        printf("Small number = %d\n",c);
    else
        printf("Numbers are equal");
}
