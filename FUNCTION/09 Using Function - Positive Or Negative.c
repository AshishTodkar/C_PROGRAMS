#include<stdio.h>
#include<conio.h>

void PosNeg(int);

int main()
{
    int No=0;

    printf("\n\t Enter A Number To Check It Is Positive Or Negative : ");
    scanf("%d",&No);

    PosNeg(No);

    printf("\n\n==================================*************===================================\n\n");

    getch();
    return 0;
}

void PosNeg(No)
{
    if( No == 0)
    {
        printf("\n\t Given Number %d Is Neutral Number.",No);
    }
    else if( No > 0)
    {
        printf("\n\t Given Number %d Is Positive Number.",No);
    }
    else
    {
        printf("\n\t Given Number %d Is Negative Number.",No);
    }

    return;
}
