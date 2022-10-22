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
        if (!((Str[i]>='a' && Str[i] <= 'z') || (Str[i]>='A' && Str[i] <= 'Z') || (Str[i]>='0' && Str[i] <= '9')))
        {
            Cnt++;
        }
        i++;
    }

    printf("\n\t Special Symbols Count In Given String Is = %d.",Cnt);

    printf("\n\n =======================**********=========================\n\n");

    getch();
    return 0;
}
