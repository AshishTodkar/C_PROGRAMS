#include<stdio.h>
#include<conio.h>

int main()
{
    int Num1 = 0, Num2 = 0, LCM = 0, HCF = 0;

    printf("\n\t Enter First Number : ");
    scanf("%d",&Num1);

    printf("\n\t Enter Second Number : ");
    scanf("%d",&Num2);

    if( Num1 < Num2 )
    {
        HCF = Num1;
    }
    else
    {
        HCF = Num2;
    }

    for(;HCF >= 1;HCF--)
    {
        if( Num1 % HCF == 0 && Num2 % HCF == 0)
        {
            break;
        }
    }

    for(LCM = 1;LCM <= Num1*Num2;LCM++)
    {
        if( LCM % Num1 == 0 && LCM % Num2 == 0)
        {
            break;
        }
    }

    /// We Can Also Find LCM Or HCF By ( LCM * HCF = Num1 * Num2 ) If We Have Value Of One Of them ( LCM Or HCF )


    printf("\n\t HCF And LCM Of Given Numbers Are %d And %d.",HCF,LCM);

    printf("\n\n==========================******************===============================\n\n");

    getch();
    return 0;
}

