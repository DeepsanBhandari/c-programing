#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    if(n%5==0 && n%3==0)
    {
        printf("The number is divisible by 3 and 5\n");
    } 
    else {
        printf("The number is not divisible by 3 and 5\n");
    } 
    return 0;
}