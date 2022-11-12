#include<stdio.h>
#include<conio.h>

int main()
{
    int Num1 = 0, Num2 = 0, Temp1 = 0, Temp2 = 0, LCM = 0, HCF = 0;

    printf("\n\t Enter First Number : ");
    scanf("%d",&Num1);

    printf("\n\t Enter Second Number : ");
    scanf("%d",&Num2);

    Temp1 = Num1;
    Temp2 = Num2;

    while( Temp1 != Temp2 )
    {
        if( Temp1 > Temp2 )
        {
            Temp1 -= Temp2;
        }
        else
        {
            Temp2 -= Temp1;
        }
    }

    HCF = Temp1;

    LCM = ( Num1 * Num2 ) / HCF;

    printf("\n\t HCF And LCM Of Given Numbers Are %d And %d.",HCF,LCM);

    printf("\n\n==========================******************===============================\n\n");

    getch();
    return 0;
}
