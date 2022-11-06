/// Give Count 3 To 15

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
        for(c=Cnt;c>r;printf(" "),c--);

        for(c=1;c<r*2;printf("O"),c++);

        printf("\n\t\t");
    }

    for(r=1;r<=Cnt;r++)
    {
        for(c=1;c<=Cnt+1;printf("\b"),c++);

        for(c=1;c<=Cnt;(r <= c)?printf("#"):printf(" "),c++);

        printf(" ");

        for(c=1;c<=Cnt*2-1;printf("@"),c++);

        printf(" ");

        for(c=1;c<=Cnt;(r + c <= Cnt + 1)?printf("#"):printf(" "),c++);

        printf("\n\t\t");
    }

    for(r=1;r<=Cnt*2;r++)
    {
        for(c=1;c<=Cnt*2-1;(r <= c)?printf("O"):printf("  "),c++);

        printf("\n\t\t");
    }

    printf("\n\n===============================******************=======================================\n\n");

    getch();
    return 0;
}
