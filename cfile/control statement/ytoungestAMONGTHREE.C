#include<stdio.h>
int main()
{
    int a, b,c;
    printf("enter the age of three peoples:\n");
    scanf("%d%d%d",&a,&b,&c);
    if(a<b && a<c)
    {
        printf("The youngest is %d",a);
    }
    else if(b<c && b<a){
        printf("THe youngest is %d",b);
    } else
    {
        printf("The youngest is %d",c);
    }
    return 0;
}
