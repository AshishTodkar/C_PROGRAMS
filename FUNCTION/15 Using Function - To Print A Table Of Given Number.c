#include<stdio.h>
#include<conio.h>

void Table(int Num)
{
    int i = 0;

    for(i=1;i<=10;i++)
    {
        printf("\n\t %d ",Num*i);
    }

    return;
}
int main()
{
    int No=0;

    printf("\n\t Enter A Number To Print It's Table : ");
    scanf("%d",&No);

    printf("\n\n===================*******======================\n\n");

    Table(No);

    printf("\n\n===================*******======================\n\n");

    getch();
    return 0;
}
