///Sum Of Divisors Of Given Number is equal To Given Number ( Skip Itself When Addition )

#include<stdio.h>
#include<conio.h>

int Perfect_No(int Num)
{
    int i=0, Add = 0;

    for(i=1;i<Num;i++)
    {
        if(Num % i == 0)
        {
            Add = Add + i;
        }
    }

    return Add;
}

int main()
{
    int No=0,Sum=0;

    printf("\n\t Enter a Number To Check It Is Perfect Or Not : ");
    scanf("%d",&No);

    Sum = Perfect_No(No);

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
