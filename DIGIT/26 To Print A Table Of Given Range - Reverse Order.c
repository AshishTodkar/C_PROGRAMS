#include<stdio.h>
#include<conio.h>

int main()
{
    int SNo=0,ENo=0,i=0,j=0;

    printf("\n\t Enter A Starting Number : ");
    scanf("%d",&SNo);

    printf("\n\t Enter A Ending Number : ");
    scanf("%d",&ENo);

    if( SNo > ENo)
    {
        SNo = SNo + ENo;
        ENo = SNo - ENo;
        SNo = SNo - ENo;
    }

    printf("\n\n===================*******======================\n\n");

    for(i=10;i>0;i--)
    {
        for(j=SNo;j<=ENo;j++)
        {
             printf("\t %d ",i*j);
        }
        printf("\n");
    }

    printf("\n\n===================*******======================\n\n");

    getch();
    return 0;
}
