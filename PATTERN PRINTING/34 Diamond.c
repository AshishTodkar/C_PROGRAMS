#include<stdio.h>
#include<conio.h>

int main()
{
    int r=0,c=0,Cnt=0,a=0;

    printf("\n\t Enter Number Of Rows & Column Count : ");
    scanf("%d",&Cnt);

    printf("\n\t Pattern Is : \n\n\t");

    for(r=1;r<=Cnt;r++)
    {
        if( r <= Cnt / 2 + 1)
        {
            for(a=Cnt;a>r;a--)
            {
                printf(" ");
            }
            for(c=1;c<=r;c++)
            {
                printf("* ");
            }
            printf("\n\t");
        }
        else
        {
            for(c=1;c<r;c++)
            {
                printf(" ");
            }
            for(a=Cnt;a>=r;a--)
            {
                printf("* ");
            }
            printf("\n\t");
        }

    }

    printf("\n\n===================*******======================\n\n");

    getch();
    return 0;
}
