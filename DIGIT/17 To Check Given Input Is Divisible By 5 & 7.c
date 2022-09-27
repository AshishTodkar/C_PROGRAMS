#include<stdio.h>
#include<conio.h>

int main()
{
    int No=0;

    up:

    printf("\n\t Enter a Number To Check It Is Divisible By 5 & 7 : ");
    scanf("%d",&No);

    if( No == 0 )
    {
        printf("\n\t Enter A Number Other Than 0. \n");
        goto up;
    }
    else if( No % 5 == 0 && No % 7 ==0)
    {
        printf("\n\t Given Number %d Is Divisible By Both 5 & 7. ",No);
    }
    else if( No % 5 == 0)
    {
        printf("\n\t Given Number %d Is Divisible By Only 5. ",No);
    }
    else if( No % 7 == 0)
    {
        printf("\n\t Given Number %d Is Divisible By Only 7. ",No);
    }
    else
    {
        printf("\n\t Given Number %d Is Not Divisible By Both 5 & 7. ",No);
    }

    printf("\n\n===================*******======================\n\n");

    getch();
    return 0;
}

