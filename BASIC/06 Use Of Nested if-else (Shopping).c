#include<stdio.h>
#include<conio.h>

int main()
{
    float amount = 0.0;

    printf("\n\t Enter Your Account Balance : ");
    scanf("%f",&amount);

    if( amount > 1000 )
    {
        printf("\n\t Welcome To Mall !!! \n");

        if( amount > 10000)
        {
            printf("\n\t You Can Be A Prime Member Of This Mall !!! \n");
        }
        else
        {
            printf("\n\t Have A Nice Shopping !!! \n");
        }
    }
    else
    {
        printf("\n\t Minimum Balance Required To Shop Here is 1000+ \n");

        if( amount >500 )
        {
            printf("\n\t You Can Visit Outlet At Corner !!! \n");
        }
        else
        {
            printf("\n\tYou Are Not Eligible For Shopping Here !!! \n");
        }
    }

    printf("\n\n===================*******======================\n\n");

    getch();
    return 0;
}
