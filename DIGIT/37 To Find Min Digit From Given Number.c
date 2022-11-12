#include<stdio.h>
#include<conio.h>

int main()
{
    int Num = 0 , Temp = 0, Dig = 0, Min = 0;

    printf("\n\t Enter A Number : ");
    scanf("%d",&Num);

    Temp = Num;
    Min = 9;

    while( Temp > 0 )
    {
        Dig = Temp % 10;

        if( Dig < Min )
        {
            Min = Dig;
        }

        Temp = Temp / 10;

    }

    printf("\n\t Minimum Digit In Given Number %d Is %d.",Num,Min);

    printf("\n\n=====================***********===========================\n\n");

    getch();
    return 0;
}
