#include<stdio.h>
#include<conio.h>

int main()
{
    int Num[5]={10,20,30,40,50};

    printf("\n\t Enter Value Of 1st Element = ");
    scanf("%d",&Num[0]);
    printf("\n\t Enter Value Of 2nd Element = ");
    scanf("%d",&Num[1]);
    printf("\n\t Enter Value Of 3rd Element = ");
    scanf("%d",&Num[2]);
    printf("\n\t Enter Value Of 4th Element = ");
    scanf("%d",&Num[3]);
    printf("\n\t Enter Value Of 5th Element = ");
    scanf("%d",&Num[4]);

    getch();
    printf("\n\n");


    printf("\n\t Value Of 1st Element = %d.",Num[0]);
    printf("\n\t Value Of 2nd Element = %d.",Num[1]);
    printf("\n\t Value Of 3rd Element = %d.",Num[2]);
    printf("\n\t Value Of 4th Element = %d.",Num[3]);
    printf("\n\t Value Of 5th Element = %d.",Num[4]);


    printf("\n\n======================***********=========================\n\n");

    getch();
    return 0;
}

