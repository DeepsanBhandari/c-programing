#include<stdio.h>
#include<conio.h>
int main()
{
    int cp,sp,loss,profit;
    printf("Enter cost price and selling price");
     scanf("%d%d",&cp,&sp);
     if(sp>=cp)
     {
        profit=sp-cp;
        printf("the profit is %d",profit);
     }
     else
     {
        loss=cp-sp;
        printf("the loss is %d",loss);
     }
     return 0;
}