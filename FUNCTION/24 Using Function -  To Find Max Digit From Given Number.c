#include<stdio.h>
#include<conio.h>

void Max_Dig(int No)
{
    int  Temp = 0, Dig = 0, Max = 0;

    Temp = No;

    while( Temp > 0 )
    {
        Dig = Temp % 10;

        if( Dig > Max )
        {
            Max = Dig;
        }

        Temp = Temp / 10;

    }

    printf("\n\t Maximum Digit In Given Number %d Is %d.",No,Max);
}

int main()
{
    int Num = 0;

    printf("\n\t Enter A Number : ");
    scanf("%d",&Num);

    Max_Dig(Num);

    printf("\n\n=====================***********===========================\n\n");

    getch();
    return 0;
}
