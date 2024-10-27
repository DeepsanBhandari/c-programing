//Display this GP 100.50,25, ....up to n terms.
#include<stdio.h>
int main()
{
    float n;
    printf("Enter the number to which series shown");
    scanf("%f",&n);
    float a=100;
    for(float i=1;i<=n;i++){
        printf("%f ",a);
        a=a/2;
    }
    return 0;
}