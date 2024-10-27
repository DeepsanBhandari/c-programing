#include<stdio.h>
int main()
{
    int n,sum=0,lasstdigit=0;
    printf("Enter a number");
    scanf("%d",&n);
    while(n!=0){
        lasstdigit=n%10;
        sum=sum + lasstdigit;
        n=n/10;
    }
    printf("The sum of digits is %d",sum);
    return 0;
}