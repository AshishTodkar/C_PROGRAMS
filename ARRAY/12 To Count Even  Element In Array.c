#include<stdio.h>
#include<conio.h>

int main()
{
    int i=0,Num[5]={},Cnt=0;

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
            Cnt++;
        }
    }

    printf("\n\t Even Element Is Found %d Times In Above Array.",Cnt);

    printf("\n\n======================***********=========================\n\n");

    getch();
    return 0;
}
