
#include<stdio.h>
int main()
{
    int i = 20;
    chandan:
        printf("%d\n",i);
        i--;

        if (i>0)
        goto chandan;

    return 0;
}
