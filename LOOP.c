#include<stdio.h>
int main()
{
    int i,x;
    printf("Enter any number  : ");
    scanf("%d",&x);
    for(i=1; i<=x; i++)

    {

        if (i%2==0)
            continue;
        printf("%d\t",i);
        if(i==18)
            break;
    }
}
