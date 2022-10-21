#include<stdio.h>
#include<conio.h>

int main()
{
    char Str1[20]={'\0'},Str2[20]={'\0'};
    int i=0;

    printf("\n\t Enter A String = ");
    gets(Str1);

    while(Str1[i]!='\0')
    {
        Str2[i] = Str1[i];
        i++;
    }

    printf("\n\t Given String Is = %s.",Str1);

    printf("\n\n\t New Copied String Is = %s.",Str2);

    printf("\n\n =======================**********=========================\n\n");

    getch();
    return 0;
}
