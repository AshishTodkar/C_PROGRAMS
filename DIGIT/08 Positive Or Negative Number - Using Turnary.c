#include<stdio.h>
#include<conio.h>

int main()
{
    int No=0;

    printf("\n\t To check Given Number Is Positive Or Negative => \n");

    printf("\n\t Enter A Number : ");
    scanf("%d",&No);

    ( No == 0)?printf("\n\t %d Is Neutral Number.",No):( No > 0)?printf("\n\t %d Is Positive Number.",No):printf("\n\t %d Is Negative Number.",No);


    printf("\n\n===================*******======================\n\n");

    getch();
    return 0;
}
