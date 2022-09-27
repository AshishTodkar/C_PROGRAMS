#include<stdio.h>
#include<conio.h>

int main()
{
    int No=0,i=0,Cnt=0;

    printf("\n\t Enter a Number To Check It Is Prime Or Not : ");
    scanf("%d",&No);

    for(i=1;i<=No;i++)
    {
        if(No % i == 0)
        {
            Cnt++;
        }
    }

    if(Cnt==2)
    {
        printf("\n\t Given Number %d Is Prime Number.",No);
    }
    else

    {
        printf("\n\t Given Number %d Is Not Prime Number.",No);
    }

    printf("\n\n===================*******======================\n\n");

    getch();
    return 0;
}
