#include<stdio.h>
#include<conio.h>

int main()
{
    int No1=0, No2=0, Temp=0;

    printf("\n\t Enter a First Number For Swapping : ");
    scanf("%d",&No1);

    printf("\n\t Enter a Second Number For Swapping : ");
    scanf("%d",&No2);

    printf("\n\t Numbers Before Swapping : \n\t First Number  : %d \n\t Second Number : %d \n\t",No1,No2);

    Temp=No1;
    No1=No2;
    No2=Temp;

    printf("\n\t Numbers After Swapping : \n\t First Number  : %d \n\t Second Number : %d \n\t",No1,No2);

    printf("\n\n===================*******======================\n\n");

    getch();
    return 0;

}
