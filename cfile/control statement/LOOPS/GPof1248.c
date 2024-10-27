#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number to which series will continue :\n");
    scanf("%d",&n);
    int a=1;
    for(int i=1;i<=n;i++){
        printf("%d ",a);
        a=a*2;
    }
    return 0;
}
// gp of number 1 2 4 8 