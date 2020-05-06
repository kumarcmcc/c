//Write a program that read
#include<stdio.h>
int main()
{
    int a[100],sum=0,i,n;
    printf("how mant number ? ");
    scanf("%d",&n);

  printf("Enter  Numbers  :  ");
  for(i=0;i<n;i++)
    scanf("%d",&a[i]);
     for(i=0;i<5;i++)
     {
         sum=sum+a[i];
     }
    printf("%d\n",sum);

printf("%.2f",(float)sum/n);

















/*   int sum=marks[0]+marks[1]+marks[2]+marks[3]+marks[4];

    printf("Enter 5 disit : ");
    for(i=0;i<=4;i++)
        scanf("%d",&markes[i]);

    printf("%d ",markes[i]);

   printf("%d \n",marks[0]+marks[1]+marks[2]+marks[3]+marks[4]);
printf("%d",sum);
    return 0;*/

}
