#include<stdio.h>
#include<conio.h>

int main()
{
    int day=0;

    printf("\n\t Enter a Day Number : ");
    scanf("%d",&day);

    switch(day)
    {
        case 1:
            printf("\n\t Sunday");
            break;
        case 2:
            printf("\n\t Monday");
            break;
        case 3:
            printf("\n\t Tuesday");
            break;
        case 4:
            printf("\n\t Wednesday");
            break;
        case 5:
            printf("\n\t Thursday");
            break;
        case 6:
            printf("\n\t Friday");
            break;
        case 7:
            printf("\n\t Saturday");
            break;
        default:
            printf("\n\t Invalid Day");
            break;
    }

    printf("\n\n=================*********=====================\n\n");

    getch();
    return 0;
}
