#include<stdio.h>
#include<conio.h>

int main()
{
    int r = 0, c = 0, i = 0, Cnt = 0;

    printf("\n\t Enter A Count : ");
    scanf("%d",&Cnt);

    printf("\n\n\t Pattern Is : \n\n");

    for(r=1,i=1;r<=Cnt;r++,i+=2)
    {
        for(c=1;c<=Cnt*2-1;c++)
        {
            if( r + c > Cnt && c - r <= Cnt - 1)
            {
                printf(" %3d",i);

                if( c < Cnt )
                {
                    i++;
                }
                else
                {
                    i--;
                }
            }
            else
            {
                printf("    ");
            }
        }

        printf("\n");
    }

    printf("\n\n============================**************================================\n\n");

    getch();
    return 0;
}
