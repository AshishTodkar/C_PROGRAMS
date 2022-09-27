#include<stdio.h>
#include<conio.h>

int main()
{
    int No=0,Sum=0,i=0,Cnt=0;

    printf("\n\t Enter How Many Numbers You Want To Add : ");
    scanf("%d",&i);

    while(Cnt<i)
    {
        printf("\n\t Enter Number %d = ",Cnt+1);
        scanf("%d",&No);

        Sum += No;
        Cnt++;
    }

    printf("\n\t Addition Of Given %d Numbers Is %d.",i,Sum);

    printf("\n\n===================*******======================\n\n");

    getch();
    return 0;
}
