#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,k,l;
    for(i=1,j=1;i<=5;i++,j=j+2);
    {
     for(k=1;k<=5-i;k++)
     printf(" ");
     for(i=1;i<=j;i++)
     {
     printf("*");
     }
     printf("\n");

    }
return 0;
}