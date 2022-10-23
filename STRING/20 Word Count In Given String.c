#include<stdio.h>
#include<conio.h>

int main()
{
    char Str[100]="";
    int i=0,W_Cnt=0;

    printf("\n\t Enter A String :");
    gets(Str);

    while( Str[i] != '\0')
    {
        if(Str[i]==' ')
        {
            W_Cnt++;
        }
        i++;
    }

    printf("\n\t Word Count In Given String Is : %d ",W_Cnt+1);

    printf("\n\n==================================****************=======================================\n\n");

    getch();
    return 0;
}
