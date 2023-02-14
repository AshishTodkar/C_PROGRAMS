#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct stud
{
    int Roll_No;
    char Name[20];
    char City[10];
    float Per;
};

int main()
{
    int i=0;
    struct stud std[3];

    printf("\n\t Accepting Student Details : \n\n");

    for(i=0;i<3;i++)
    {
        printf("\n\t Enter %d Student Details : \n",i+101);

        printf("\n\t Enter Roll Number : ");
        scanf("%d",&std[i].Roll_No);

        printf("\n\t Enter Name : ");
        scanf("%s",&std[i].Name);

        printf("\n\t Enter City : ");
        scanf("%s",&std[i].City);

        printf("\n\t Enter Percentage : ");
        scanf("%f",&std[i].Per);

        printf("\n--------------------------------------------\n");

    }

    getch();
    system("cls");

    printf("\n\t Display Student Details : \n\n");

    for(i=0;i<3;i++)
    {
        printf("\n\t Display %d Student Details : \n",i+101);

        printf("\n\t Roll Number : %d ",std[i].Roll_No);
        printf("\n\t Name : %s ",std[i].Name);
        printf("\n\t City : %s ",std[i].City);
        printf("\n\t Percentage : %f ",std[i].Per);

        printf("\n---------------------------------------------\n");
    }

    printf("\n\n==============================***********=================================\n\n");

    getch();
    return 0;
}
