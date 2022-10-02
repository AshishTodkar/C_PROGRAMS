#include<stdio.h>
#include<conio.h>

int main()
{
    char ch='\0';

    printf("\n\t Enter A Character : ");
    ch = getche();

    printf("\n");

    if( ch >= 'A' && ch <= 'Z')
    {
        printf("\n\t Given Character %c Is In Uppercase.",ch);
    }
    else if( ch >= 'a' && ch <= 'z' )
    {
        printf("\n\t Given Character %c Is In Lowercase.",ch);
    }
    else if( ch >= '1' && ch <= '9')
    {
        printf("\n\t Given Character %c Is Digit.",ch);
    }
    else
    {
        printf("\n\t Given Character %c Is Special Symbol.",ch);
    }

    printf("\n\n=======================**********==============================\n\n");

    getch();
    return 0;
}
