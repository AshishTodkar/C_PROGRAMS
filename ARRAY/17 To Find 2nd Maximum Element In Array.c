#include<stdio.h>
#include<conio.h>

int main()
{
    int i=0,Num[5]={},Max1=0,Max2=0;

    for(i=0;i<5;i++)
    {
        printf("\n\t Enter Element No. %d = ",i+1);
        scanf("%d",&Num[i]);
    }

    getch();

    for(i=0;i<5;i++)
    {
        if(Num[i]>Max1)
        {
            Max1=Num[i];
        }
    }

    for(i=0;i<5;i++)
    {
        if(Num[i]>Max2 && Num[i] != Max1)
        {
            Max2=Num[i];
        }
    }

    printf("\n\n\t 2nd Maximum Element In Above Array Is %d.",Max2);

    printf("\n\n======================***********=========================\n\n");

    getch();
    return 0;
}
