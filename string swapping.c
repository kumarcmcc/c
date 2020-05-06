#include<stdio.h>
int main()
{
    char A[15]="Chandan";
    char B[15]="Mondal";
    char C[15];
    printf("After\n");
     printf("A = %s\n",A);
    printf("B = %s\n",B);



    strcpy(C,A);
    strcpy(A,B);
    strcpy(B,C);
 printf("Befor\n");
    printf("A = %s\n",A);
    printf("B = %s\n",B);
}
