#include<stdio.h>
#include<conio.h>

int main()
{
    char Str[20]={'\0'};
    int Cnt=0,i=0;

    printf("\n\t Enter A String = ");
    gets(Str);

    while(Str[i]!='\0')
    {
        if( Str[i]>='a' && Str[i] <= 'z')
        {
            Cnt++;
        }
        i++;
    }

    printf("\n\t Small Letters Count In Given String Is = %d.",Cnt);

    printf("\n\n =======================**********=========================\n\n");

    getch();
    return 0;
}
