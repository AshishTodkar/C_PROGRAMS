#include<stdio.h>
#include<conio.h>

void Prime_No(int Num)
{
    int i=0,Cnt=0;

    for(i=1;i<=Num;i++)
    {
        if(Num % i == 0)
        {
            Cnt++;
        }
    }

    if(Cnt==2)
    {
        printf("\n\t Given Number %d Is Prime Number.",Num);
    }
    else
    {
        printf("\n\t Given Number %d Is Not Prime Number.",Num);
    }

    return;
}

int main()
{
    int No=0;

    printf("\n\t Enter a Number To Check It Is Prime Or Not : ");
    scanf("%d",&No);

    Prime_No(No);

    printf("\n\n===================*******======================\n\n");

    getch();
    return 0;
}
