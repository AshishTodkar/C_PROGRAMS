#include<stdio.h>
#include<conio.h>

int main()
{
    int No1=0,No2=0,No3=0,Cnt=0;

    printf("\n\t Enter A Count : ");
    scanf("%d",&Cnt);

    printf("\n\t Fibonacci Series Of Given Count Is : ");

    for(No1=1;Cnt>0;Cnt--)
    {
        printf("\t %d ",No3);

        No3 = No1 + No2;
        No1 = No2;
        No2 = No3;
    }

    printf("\n\n===================*******======================\n\n");

    getch();
    return 0;
}
