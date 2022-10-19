/// Using for ( Without Body )

#include<stdio.h>
#include<conio.h>

int main()
{
    char Str[20]={'\0'};
    int i=0;

    printf("\n\t Enter A String = ");
    gets(Str);

    for(i=0;Str[i] != 0;i++);

    printf("\n\t Length Of Given String Is = %d.",i);

    printf("\n\n =======================**********=========================\n\n");

    getch();
    return 0;
}
