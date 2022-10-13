#include<stdio.h>
#include<conio.h>

int main()
{
    int i=0,Temp=0,Num[5]={},Cnt=0;

    for(i=0;i<5;i++)
    {
        printf("\n\t Enter Element No. %d = ",i+1);
        scanf("%d",&Num[i]);
    }

    printf("\n\t Enter An Element To Count in Above Array : ");
    scanf("%d",&Temp);

    for(i=0;i<5;i++)
    {
        if(Num[i] == Temp)
        {
            Cnt++;
        }
    }

    printf("\n\t An Element %d Is Found %d Times In Above Array.",Temp,Cnt);

    printf("\n\n======================***********=========================\n\n");

    getch();
    return 0;
}
