#include<stdio.h>
#include<conio.h>

int main()
{
    int B=0,E1=0,E2=0,EMul=0,i=0,Res=1;

    printf("\n\t Enter A Base = ");
    scanf("%d",&B);

    printf("\n\t Enter First Exponent = ");
    scanf("%d",&E1);

    printf("\n\t Enter Second Exponent = ");
    scanf("%d",&E2);

    EMul = E1 * E2;

    if( B == 1 )
    {
        Res = 1;
    }
    else
    {
        for(i=1;i<=EMul;i++)
        {
            Res = Res * B ;
        }
    }

    printf("\n\t Result Of (%d^%d)^%d Is %d.",B,E1,E2,Res);

    printf("\n\n===================*******======================\n\n");

    getch();
    return 0;
}

