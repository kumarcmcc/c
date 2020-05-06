
#include<stdio.h>
int main()
{
    int num[]={25,45,89,26,98,58,20,4,8,96};
    int val,pos=-1,i;


    printf("Enter the value you want : ");
    scanf("%d",&val);

    for(i=0;i<10;i++)
{
   if (val==num[i])
   {
       pos=i+1;
       break;
   }
}
  if  (pos==-1)
    printf("The item is not found .");
    else
    printf("The position is %d",pos);

    return 0;
}
