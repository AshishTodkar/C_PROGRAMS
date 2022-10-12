#include<stdio.h>
#include<conio.h>
#define Size 5

int main()
{
    int i=0,Bill[Size];

    for(i=0;i<5;i++)
    {
        printf("\n\t Enter Bill No. %d = ",i+1);
        scanf("%d",&Bill[i]);
    }

    getch();

    printf("\n\t Elements In Array Are : \n");

    for(i=0;i<5;i++)
    {
        printf("\n\t Amount Of Bill No. %d = %d",i+1,Bill[i]);
    }

    printf("\n\n======================***********=========================\n\n");

    getch();
    return 0;
}
