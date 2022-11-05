#include<stdio.h>
#include<conio.h>

int main()
{
    int r=0,c=0,Cnt=0;

    printf("\n\t Enter A Count To Print Ganapati Bappa Pattern : ");
    scanf("%d",&Cnt);

    printf("\n\t Pattern Of Ganapati Bappa Is : \n\n\t\t");

    printf("\n >>>>>>>>>>> OM GAN GANPATAYE NAMAH <<<<<<<<<<<\n\n\t\t");

    for(r=1;r<=Cnt;r++)
    {
        for(c=Cnt;c>r;c--)
        {
            printf(" ");
        }

        for(c=1;c<r*2;c++)
        {
            printf("O");
        }

        printf("\n\t\t");
    }

    for(r=1;r<=Cnt;r++)
    {
        for(c=1;c<=Cnt+1;c++)
        {
            printf("\b");
        }

        for(c=1;c<=Cnt;c++)
        {
            if( r <= c )
            {
                printf("#");
            }
            else
            {
                printf(" ");
            }
        }

        printf(" ");

        for(c=1;c<=Cnt*2-1;c++)
        {
            printf("@");
        }

        printf(" ");

        for(c=1;c<=Cnt;c++)
        {
            if( r + c <= Cnt + 1 )
            {
               printf("#");
            }
            else
            {
               printf(" ");
            }
        }

        printf("\n\t\t");
    }

    for(r=1;r<=Cnt*2;r++)
    {
        for(c=1;c<=Cnt*2-1;c++)
        {
            if( r <= c )
            {
               printf("O");
            }
            else
            {
               printf("  ");
            }
        }

        printf("\n\t\t");
    }

    printf("\n\n===============================******************=======================================\n\n");

    getch();
    return 0;
}
