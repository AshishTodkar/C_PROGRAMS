#include<stdio.h>
#include<conio.h>

int main()
{
    int Num1 = 0, Num2 = 0, Dig1 = 0, Dig2 = 0, Temp1 = 0, Temp2 = 0;

    printf("\n\t Enter A Number : ");
    scanf("%d",&Num1);

    printf("\n\t Enter A 2 Digit Number That You Want To Search In Given Number : ");
    scanf("%d",&Num2);

    Temp1 = Num1;
    Temp2 = Num2;

    while( Temp1 > 0 )
    {
        Dig1 = Temp1 % 10;
        Dig2 = Temp2 % 10;

        if( Dig1 == Dig2 )
        {
            Temp1 /= 10;
            Temp2 /= 10;

            Dig1 = Temp1 % 10;
            Dig2 = Temp2 % 10;

            if( Dig1 == Dig2 )
            {
                printf("\n\t Found Given 2 Digit Number %d In Given Number %d.",Num2,Num1);
                goto Dwn;
            }
        }

        Temp1 /= 10;
    }

    if( Temp1 < 10 )
    {
        printf("\n\t Does Not Found Given 2 Digit Number %d In Given Number %d.",Num2,Num1);
    }

    Dwn:

    printf("\n\n ==================================******************==========================================\n\n");

    getch();
    return 0;
}
