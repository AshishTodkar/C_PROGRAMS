#include<stdio.h>
#include<conio.h>

int main()
{
    int i=0,Num[5]={},E_Cnt=0,O_Cnt=0;

    for(i=0;i<5;i++)
    {
        printf("\n\t Enter Element No. %d = ",i+1);
        scanf("%d",&Num[i]);
    }

    getch();

    for(i=0;i<5;i++)
    {
        if(Num[i] % 2 == 0)
        {
            E_Cnt++;
        }
        else
        {
            O_Cnt++;
        }
    }

    printf("\n\n\t Even Element Is Found %d Times In Above Array.",E_Cnt);

    printf("\n\n\t Odd Element Is Found %d Times In Above Array.",O_Cnt);

    printf("\n\n======================***********=========================\n\n");

    getch();
    return 0;
}
