#include<stdio.h>
#include<conio.h>

int main()
{
    int r=0,c=0,Cnt=0,i=0;

    printf("\n\t Enter Number Of Rows & Column Count : ");
    scanf("%d",&Cnt);

    printf("\n\t Pattern Is : \n\n\t");

    for(r=1;r<=Cnt;r++)
    {
        for(i=1,c=1;c<=Cnt;c++)
        {
            if( r % 2 == 0)
            {
                printf(" %3d",i);
                i+=2;
            }
            else
            {
                printf(" %3d",i*2);
                i++;
            }
        }
        printf("\n\t");
    }

    printf("\n\n===================*******======================\n\n");

    getch();
    return 0;
}

