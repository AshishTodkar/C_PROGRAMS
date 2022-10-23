/// Using for
/// Taking Only One String

#include<stdio.h>
#include<conio.h>

int main()
{
    char Str[20]={'\0'},Temp='\0';
    int i=0,j=0;

    printf("\n\t Enter A String = ");
    gets(Str);

    for(j=0;Str[j]!='\0';j++);

    j--;

     for(i=0;i<j;i++,j--)
    {
        Temp= Str[i];
        Str[i]=Str[j];
        Str[j]=Temp;
    }

    printf("\n\t After Reversing Given String = %s.",Str);

    printf("\n\n =======================**********=========================\n\n");

    getch();
    return 0;
}
