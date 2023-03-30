#include<stdio.h>
#include<conio.h>

int main()
{
    int Deci = 0,Rem = 0,i=1;
    long long int Bi = 0,Num;

    Up:

    printf("\n\t Enter A Binary ( Only in 0 And 1 Form ) Number : ");
    scanf("%lld",&Num);

    Bi = Num;

    for(;Num > 0; Num /= 10)
    {
        Rem = Num % 10;

        if( Rem != 0 && Rem != 1)
        {
            goto Up;
        }
    }

    for(Rem = 0;Bi > 0; Rem = Bi % 10 , Deci += ( Rem * i ) , i *= 2 , Bi /= 10);

    printf("\n\t Decimal Number Of Given Binary Number Is %d.",Deci);

    printf("\n\n==========================******************===============================\n\n");

    getch();
    return 0;
}
