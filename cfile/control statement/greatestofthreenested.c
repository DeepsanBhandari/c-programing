#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    printf("enter the three numbers");
    scanf("%d%d%d",&a,&b,&c);
    // 
    if(a>b){  //b is out of race
        if(a>c)
        printf("%d is greatest",a);
        else //a<c
        printf("%d is greatest",c);
    }
    else{ //b>a           a is out of race
           if(b>c)
           printf("%d is greatest",b);
           else  //b<c
           printf("%d is greatest",c);
    }
    return 0;
}