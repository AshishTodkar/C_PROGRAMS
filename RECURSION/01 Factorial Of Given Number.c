#include<stdio.h>
#include<conio.h>

int Fact(int);

int main()
{
    int No=0;

    printf("\n\t Enter A Number : ");
    scanf("%d",&No);

    printf("\n\t Factorial Of Given Number %d Is : %d",No,Fact(No));

    printf("\n\n==================================*************===================================\n\n");

    getch();
    return 0;
}

int Fact(No)
{
    if(No>1)
    {
        return No * Fact(No-1);
    }
}
