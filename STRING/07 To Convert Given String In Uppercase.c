#include<stdio.h>
#include<conio.h>

int main()
{
    char Str[20]={'\0'};
    int i=0;

    printf("\n\t Enter A String = ");
    gets(Str);

    while(Str[i]!='\0')
    {
        if( Str[i]>= 'a' && Str[i]<='z')
        {
            Str[i] = Str[i] - 32;
        }
        i++;
    }

    printf("\n\t After Converting To Uppercase = %s.",Str);

    printf("\n\n =======================**********=========================\n\n");

    getch();
    return 0;
}
