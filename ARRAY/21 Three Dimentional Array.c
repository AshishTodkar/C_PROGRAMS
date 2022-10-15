#include<stdio.h>
#include<conio.h>

int main()
{
    int Arr[2][3][2] = { { {11,12},{21,22},{31,32} },{ {101,102},{201,202},{301,302} } };
    int i=0,j=0,k=0;

    printf("\n\t Initial Values Are : \n");

    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            for(k=0;k<2;k++)
            {
                printf("\n\t Value At Arr[%d][%d][%d] Is : %d",i,j,k,Arr[i][j][k]);
            }
        }
    }

    printf("\n\n\t Enter New Values In Our Array : \n");

     for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            for(k=0;k<2;k++)
            {
                printf("\n\t Enter Value Of Arr[%d][%d][%d] Is : ",i,j,k);
                scanf("%d",&Arr[i][j][k]);
            }
        }
    }

    printf("\n\t New Values Are : \n");

    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            for(k=0;k<2;k++)
            {
                 printf("\n\t Value At Arr[%d][%d][%d] Is : %d",i,j,k,Arr[i][j][k]);
            }
        }
    }

    printf("\n\n=============================*************=============================\n\n");

    getch();
    return 0;

}
