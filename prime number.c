#include<stdio.h>
int main()
{
    while(1)
    {
        int n,i,c=0;
        printf ("Enter a posative number :");
        scanf("%d",&n);

        for(i=2; i<n; i++)
        {
            if (n % i == 0)
                c++;
            break;
        }
        if(c==0)
            printf("Prime number\n");
        else
            printf("not prime number\n");
    }





    return 0;
}
