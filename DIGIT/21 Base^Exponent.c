#include<stdio.h>
#include<conio.h>

int main()
{
    int B=0,E=0,i=0,Res=1;

    printf("\n\t Enter A Base = ");
    scanf("%d",&B);

    printf("\n\t Enter A Exponent = ");
    scanf("%d",&E);

    if( B == 1 )
    {
        Res = 1;
    }
    else
    {
        for(i=1;i<=E;i++)
        {
            Res = Res * B ;
        }
    }

    printf("\n\t Result Of %d^%d Is %d.",B,E,Res);

    printf("\n\n===================*******======================\n\n");

    getch();
    return 0;
}

