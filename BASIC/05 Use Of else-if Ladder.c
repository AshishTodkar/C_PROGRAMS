#include<stdio.h>
#include<conio.h>

int main()
{
    int day=0;

    printf("\n\t Enter Day Number : ");
    scanf("%d",&day);

    if(day == 1)
    {
        printf("\n\t Sunday ");
    }
    else if(day == 2)
    {
        printf("\n\t Monday ");
    }
    else if(day == 3)
    {
        printf("\n\t Tuesday ");
    }
    else if(day == 4)
    {
        printf("\n\t Wednesday ");
    }
    else if(day == 5)
    {
        printf("\n\t Thursday ");
    }
    else if(day == 6)
    {
        printf("\n\t Friday ");
    }
    else if(day == 7)
    {
        printf("\n\t Saturday ");
    }
    else
    {
        printf("\n\t Invalid Day ");
    }

    printf("\n\n=================********====================\n\n");

    getch();
    return 0;
}
