#include<stdio.h>
#include<conio.h>

int main()
{
    int Num = 0 , Temp = 0, Dig = 0, Max = 0;

    printf("\n\t Enter A Number : ");
    scanf("%d",&Num);

    Temp = Num;

    while( Temp > 0 )
    {
        Dig = Temp % 10;

        if( Dig > Max )
        {
            Max = Dig;
        }

        Temp = Temp / 10;

    }

    printf("\n\t Maximum Digit In Given Number %d Is %d.",Num,Max);

    printf("\n\n=====================***********===========================\n\n");

    getch();
    return 0;
}
