#include<stdio.h>
#include<conio.h>

int main()
{
    int No1=0, No2=0;

    printf("\n\t Enter a First Number : ");
    scanf("%d",&No1);

    printf("\n\t Enter a Second Number : ");
    scanf("%d",&No2);

    if( No1 == No2)
    {
        printf("\n\t %d And %d Are Equal Numbers.",No1,No2);
    }
    else if( No1 > No2)
    {
        printf("\n\t %d Is Greater Than %d.",No1,No2);
    }
    else
    {
        printf("\n\t %d Is Greater Than %d.",No2,No1);
    }

    printf("\n\n===================*******======================\n\n");

    getch();
    return 0;

}
