#include<stdio.h>
#include<conio.h>

int Digit_Sum(int Num)
{
    int Dig = 0, Sum = 0;

    while(Num>0)
    {
        Dig = Num % 10;
        Sum = Sum + Dig;
        Num = Num / 10;
    }

    return Sum;
}

int main()
{
    int No=0,Sum=0;

    printf("\n\t Enter A Number : ");
    scanf("%d",&No);

    Sum = Digit_Sum(No);

    printf("\n\t Sum Of Digits In Given Number %d Are %d.",No,Sum);

    printf("\n\n=====================***********===========================\n\n");

    getch();
    return 0;
}
