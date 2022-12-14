#include<stdio.h>
#include<conio.h>

int Palindrome(int Num)
{
    int Rev=0,Dig=0;

    while(Num>0)
    {
        Dig = Num % 10;

        Rev = ( Rev * 10 ) + Dig ;

        Num = Num / 10;
    }

    return Rev;
}

int main()
{
    int No=0,Rev=0;

    printf("\n\t Enter A Number : ");
    scanf("%d",&No);

    Rev = Palindrome(No);

    if( Rev == No )
    {
        printf("\n\t Given Number %d Is Palindrome Number.",No);
    }
    else
    {
        printf("\n\t Given Number %d Is Not Palindrome Number.",No);
    }

    printf("\n\n=====================***********===========================\n\n");

    getch();
    return 0;
}
