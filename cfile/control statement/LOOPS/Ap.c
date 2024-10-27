//Display this AP 100,97,94,... up to positive numbers
#include<stdio.h>
int main(){
    int n;
    printf("Enter the number:\n");
    scanf("%d",&n);
    int a=100;
    for(int i=1;a>0;i++)
    {
        printf("%d ",a);
        a=a-3;
    }
    return 0;
}