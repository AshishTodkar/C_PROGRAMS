///Sum Of Divisors Of Given Number is equal To Given Number ( Skip Itself When Addition )

#include<stdio.h>
#include<conio.h>

int main()
{
    int No=0,i=0,Sum=0;

    printf("\n\t Enter a Number To Check It Is Perfect Or Not : ");
    scanf("%d",&No);

    for(i=1;i<No;i++)
    {
        if(No % i == 0)
        {
            Sum = Sum + i;
        }
    }

    if(Sum==No)
    {
        printf("\n\t Given Number %d Is Perfect Number.",No);
    }
    else

    {
        printf("\n\t Given Number %d Is Not Perfect Number.",No);
    }

    printf("\n\n===================*******======================\n\n");

    getch();
    return 0;
}
