#include<stdio.h>
#include<conio.h>

int main()
{
    int Arr[2][3] = {{11,12,13},{21,22,23}};
    int i=0,j=0;

    printf("\n\t Initial Values Are : \n");

    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("\n\t Value At Arr[%d][%d] Is : %d",i,j,Arr[i][j]);
        }
    }

    printf("\n\n\t Enter New Values In Our Array : \n");

    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("\n\t Enter Value Of Arr[%d][%d] Is : ",i,j);
            scanf("%d",&Arr[i][j]);
        }
    }

    printf("\n\t New Values Are : \n");

    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("\n\t Value At Arr[%d][%d] Is : %d",i,j,Arr[i][j]);
        }
    }

    printf("\n\n=============================*************=============================\n\n");

    getch();
    return 0;

}
