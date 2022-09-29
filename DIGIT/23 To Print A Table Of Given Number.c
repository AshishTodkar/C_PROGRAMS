#include<stdio.h>
#include<conio.h>

int main()
{
    int No=0,i=0;

    printf("\n\t Enter A Number To Print It's Table : ");
    scanf("%d",&No);

    printf("\n\n===================*******======================\n\n");

    for(i=1;i<=10;i++)
    {
        printf("\n\t %d ",No*i);
    }

    printf("\n\n===================*******======================\n\n");

    getch();
    return 0;
}
