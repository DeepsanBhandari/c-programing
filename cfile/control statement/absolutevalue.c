#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    printf("Enter a number");
    scanf("%d",&n);
    if(n<=0){
        n=n *(-1); 
        }           //if n is negative make it positive
        printf("the absolute value is %d ",n);
    
    return 0;
}