#include<stdio.h>
#include<conio.h>

int Max(int,int);

int main()
{
    int No1=0,No2=0;

    up:

    printf("\n\t Enter A First Number : ");
    scanf("%d",&No1);

    printf("\n\t Enter A Second Number : ");
    scanf("%d",&No2);

    if(No1 == No2)
    {
        printf("\n\t Given Numbers Are Equal. \n\n");
        printf("\n\t Give Two Different Numbers.\n\n");
        goto up;
    }

    printf("\n\t Maximum Number Is : %d",Max(No1,No2));

    printf("\n\n==================================*************===================================\n\n");

    getch();
    return 0;
}

int Max(No1,No2)
{
    if( No1 > No2)
    {
        return No1;
    }
    else
    {
        return No2;
    }
}
