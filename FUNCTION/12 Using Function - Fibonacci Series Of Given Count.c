#include<stdio.h>
#include<conio.h>

void Fibonacci(int No)
{
    int No1=0,No2=0,No3=0;

    printf("\n\t Fibonacci Series Of Given Count Is : ");

    for(No1=1;No>0;No--)
    {
        printf("\t %d ",No3);

        No3 = No1 + No2;
        No1 = No2;
        No2 = No3;
    }

    return;
}

int main()
{
    int Cnt=0;

    printf("\n\t Enter A Count : ");
    scanf("%d",&Cnt);

    Fibonacci(Cnt);

    printf("\n\n===================*******======================\n\n");

    getch();
    return 0;
}
