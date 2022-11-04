#include<stdio.h>
#include<conio.h>

int main()
{
    int r=0,c=0,Cnt=0,a=0,j=0,k=0;

    printf("\n\t Enter Number Of Rows & Column Count : ");
    scanf("%d",&Cnt);

    printf("\n\t Pattern Is : \n\n\t\t");

    printf("\n >>>>>>>>>>> OM GAN GANPATAYE NAMAH <<<<<<<<<<<\n\n\t\t");

    for(r=1;r<=Cnt;r++)
    {
        for(a=Cnt;a>r;a--)
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
        for(k=1;k<=Cnt+1;k++)
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

        for(j=1;j<=Cnt*2-1;j++)
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
