#include<stdio.h>
#include<conio.h>

int main()
{
    int Deci = 0,Rem = 0,i=1;
    long long int Bi = 0;

    printf("\n\t Enter A Decimal Number : ");
    scanf("%d",&Deci);

    for(;Deci > 0; Rem = Deci % 2 ,Bi += ( Rem * i ) , i *= 10 , Deci /= 2 );

    printf("\n\t Binary Number Of Given Decimal Number Is %lld.",Bi);

    printf("\n\n==========================******************===============================\n\n");

    getch();
    return 0;
}
