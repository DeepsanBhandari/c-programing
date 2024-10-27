#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number");
    scanf("%d",&n);
   // int count=1;
    for(int i=1;i<=n ;i++)
    {
        for(int j=1;j<=(n-i+1);j++)
        {
            printf("%d ",(i*j));
             //count++;
        }
        printf("\n");
    }
    return 0;

}