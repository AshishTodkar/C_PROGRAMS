#include<stdio.h>
#include<conio.h>

int main()
{
    int No=0,Temp=0,Sum=0,Dig=0;

    printf("\n\t Enter A Number : ");
    scanf("%d",&No);

    Temp = No;

    while(Temp>0)
    {
        Dig = Temp % 10;
        Sum = Sum + Dig;
        Temp = Temp / 10;
    }

    printf("\n\t Sum Of Digits In Given Number %d Are %d.",No,Sum);

    printf("\n\n=====================***********===========================\n\n");

    getch();
    return 0;
}
