#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number to which series will continue:\n");
    scanf("%d",&n);
             for(int i=4;i<=3*n+1;i=i+3)
    {
        printf("%d ",i);
    }
    return 0;
}