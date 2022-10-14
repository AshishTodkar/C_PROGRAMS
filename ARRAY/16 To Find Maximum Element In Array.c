#include<stdio.h>
#include<conio.h>

int main()
{
    int i=0,Num[5]={},Max=0;

    for(i=0;i<5;i++)
    {
        printf("\n\t Enter Element No. %d = ",i+1);
        scanf("%d",&Num[i]);
    }

    getch();

    for(i=0;i<5;i++)
    {
        if(Num[i]>Max)
        {
            Max=Num[i];
        }
    }

    printf("\n\n\t Maximum Element In Above Array Is %d.",Max);

    printf("\n\n======================***********=========================\n\n");

    getch();
    return 0;
}
