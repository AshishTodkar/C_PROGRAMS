#include<stdio.h>
#include<conio.h>

int main()
{
    int i=0,Num[5]={};

    for(i=0;i<5;i++)
    {
        printf("\n\t Enter Value Of Element %d = ",i+1);
        scanf("%d",&Num[i]);
    }

    getch();
    printf("\n\n");

    for(i=0;i<5;i++)
    {
        printf("\n\t Enter Value Of Element %d = %d.",i+1,Num[i]);
    }

    printf("\n\n======================***********=========================\n\n");

    getch();
    return 0;
}

