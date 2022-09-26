#include<stdio.h>
#include<conio.h>

int main()
{
    int No=0,Fact=0,Temp=0;

    printf("\n\t Enter A Number To Find It's Factorial : ");
    scanf("%d",&No);

    for(Fact=1,Temp=No;Temp>0;Temp--)
    {
        Fact = Fact * Temp;
    }

    printf("\n\t Factorial Of Given Number %d Is %d. ",No,Fact);

    printf("\n\n===================*******======================\n\n");

    getch();
    return 0;
}
