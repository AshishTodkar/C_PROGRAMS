#include<stdio.h>
#include<conio.h>

int main()
{
    char ch='\0';

    printf("\n\t Enter A Character : ");
    ch = getche();

    if( ch >= 'A' && ch <= 'Z')
    {
        printf("\n\n\t Given Character %c Is In Uppercase.",ch);
    }
    else if( ch >= 'a' && ch <= 'z' )
    {
        printf("\n\t Given Character %c Is In Lowercase.",ch);
    }
    else
    {
        printf("\n\t Given Character %c Is Neither Uppercase Nor Lowercase.",ch);
    }

    printf("\n\n=======================**********==============================\n\n");

    getch();
    return 0;
}
