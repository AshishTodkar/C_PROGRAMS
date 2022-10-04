#include<stdio.h>
#include<conio.h>

int main()
{
    int r=0,c=0,Cnt=0;

    printf("\n\t Enter Number Of Rows & Column Count : ");
    scanf("%d",&Cnt);

    printf("\n\t Pattern Is : \n\n\t");

    for(r=1;r<=Cnt;r++)
    {
        for(c=1;c<=Cnt;c++)
        {
            if( r + c >= Cnt + 1 )
            {
               printf(" *");
            }
            else
            {
               printf("  ");
            }
        }
        printf("\n\t");
    }

    printf("\n\n===================*******======================\n\n");

    getch();
    return 0;
}
