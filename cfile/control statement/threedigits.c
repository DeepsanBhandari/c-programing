#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    printf("Enter a number");
    scanf("%d",&n);
    if (n>99 && n<1000)
    {
        printf("the three digits number is %d",n);
    }
    else{
        printf("it is not three digits number is %d",n);
    }
    return 0;
}