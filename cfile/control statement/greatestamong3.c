#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    printf("enter the three numbers");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b && a>c)
    { 
        printf("The greatest number is %d",a);
    }else if(b>a && b>c)
    {
        printf("The greatest number is %d",b);

    }else
    {
        printf("the greatest number is %d",c);
    }
    return 0;
}