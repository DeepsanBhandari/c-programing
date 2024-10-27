#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number");
    scanf("%d",&n);
    int rev=0,lastdigits=0;
    while(n!=0)
    {
        lastdigits=n%10;
        rev=rev*10+lastdigits;
        n=n/10;


    }
    printf("the reverse is%d",rev);
    return 0;

}