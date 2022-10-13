#include<stdio.h>
#include<conio.h>

int main()
{
    int i=0,Src=0,Num[5]={};

    for(i=0;i<5;i++)
    {
        printf("\n\t Enter Element No. %d = ",i+1);
        scanf("%d",&Num[i]);
    }

    printf("\n\t Enter An Element To Be Search In Above Array : ");
    scanf("%d",&Src);

    for(i=0;i<5;i++)
    {
        if(Num[i] == Src)
        {
            break;
        }
    }
    if(i<5)
    {
        printf("\n\t An Element %d Is Found On Index %d In Above Array.",Src,i);
    }
    else
    {
        printf("\n\t An Element %d Is Not Found In Above Array.",Src);
    }

    printf("\n\n======================***********=========================\n\n");

    getch();
    return 0;
}
