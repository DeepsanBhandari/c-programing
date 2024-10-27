#include<stdio.h>
int main()
{
    int m, n;
    printf("Enter the number whose table is to get\n");
    scanf("%d",&n);
       for(int i=1;i<=10;i++){
         m=n*i;
        printf("%d *%d =%d  \n",n,i,m);
       }
       return 0;
}