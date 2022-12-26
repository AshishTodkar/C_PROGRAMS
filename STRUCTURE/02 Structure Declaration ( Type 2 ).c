#include<stdio.h>
#include<conio.h>

struct stud
{
    int Roll_No;
    char Name[20];
    char City[10];
    float Per;
}s1={101,"Ash","Karad",85.00};

int main()
{
    printf("\n\t Given Student Details : \n");
    
    printf("\n\t Roll Number : %d ",s1.Roll_No);
    printf("\n\t Name : %s ",s1.Name);
    printf("\n\t City : %s ",s1.City);
    printf("\n\t Percentage : %f ",s1.Per);

    printf("\n\n==============================***********=================================\n\n");

    getch();
    return 0;
}
