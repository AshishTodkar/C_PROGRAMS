#include<stdio.h>
#include<conio.h>
#include<string.h>

struct stud
{
    int Roll_No;
    char Name[20];
    char City[10];
    float Per;
}s1={101,"Ash","Karad",85.00};

int main()
{
    printf("\n\t 1st Student Details : \n");
    
    printf("\n\t Roll Number : %d ",s1.Roll_No);
    printf("\n\t Name : %s ",s1.Name);
    printf("\n\t City : %s ",s1.City);
    printf("\n\t Percentage : %f ",s1.Per);

    struct stud s2 = {102,"Viki","Satara",90.00};

    printf("\n\t 2nd Student Details : \n");
    
    printf("\n\t Roll Number : %d ",s2.Roll_No);
    printf("\n\t Name : %s ",s2.Name);
    printf("\n\t City : %s ",s2.City);
    printf("\n\t Percentage : %f ",s2.Per);


    struct stud s3;

    s3.Roll_No = 103;
    strcpy(s3.Name,"Adi");
    strcpy(s3.City,"Mumbai");
    s3.Per = 95.00;

    printf("\n\t 3rd Student Details : \n");
    
    printf("\n\t Roll Number : %d ",s3.Roll_No);
    printf("\n\t Name : %s ",s3.Name);
    printf("\n\t City : %s ",s3.City);
    printf("\n\t Percentage : %f ",s3.Per);

    printf("\n\n=============================***********=================================\n\n");

    getch();
    return 0;
}
