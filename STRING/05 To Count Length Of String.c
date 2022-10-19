/// Get Length Using printf

#include<stdio.h>
#include<conio.h>

int main()
{
    char Str[20]={'\0'};
    int Len=0;

    printf("\n\t Enter A String = ");
    gets(Str);

    Len = printf("%s",Str);

    printf("\n\t Length Of Given String Is = %d.",Len);

    printf("\n\n =======================**********=========================\n\n");

    getch();
    return 0;
}
