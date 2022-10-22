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
        if( Str[i]=='A' || Str[i]=='E' || Str[i]=='I' || Str[i]=='O' || Str[i]=='U' || Str[i]=='a' || Str[i]=='e' || Str[i]=='i' || Str[i]=='o' || Str[i]=='u' )
        {
            Cnt++;
        }
        i++;
    }

    printf("\n\t Vowels Count In Given String Is = %d.",Cnt);

    printf("\n\n =======================**********=========================\n\n");

    getch();
    return 0;
}
