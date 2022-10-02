#include<stdio.h>
#include<conio.h>

int main()
{
    char S_Char='\0', E_Char='\0';

    printf("\n\t Enter A Starting Character : ");
    S_Char = getche();

    printf("\n");
    getch();

    printf("\n\t Enter A Ending Character : ");
    E_Char = getche();

    printf("\n\n");

    if( S_Char <= E_Char)
    {
          while(S_Char <= E_Char)
        {
            printf("\t %c",S_Char);
            S_Char++;
        }
    }
    else
    {
        while(S_Char >= E_Char)
        {
            printf("\t %c",S_Char);
            S_Char--;
        }
    }

    printf("\n\n=======================**********==============================\n\n");

    getch();
    return 0;
}
