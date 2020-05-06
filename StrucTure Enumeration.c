
#include<stdio.h>
enum days
{
    sun,mon,tue,wed,thu,fri,sat
};
int main()
{
    enum days day1,day2;
    day1=sun;
    day2=wed;
    int dif =day2-day1;
    printf("Different = %d\n",dif);

    getch();
}
