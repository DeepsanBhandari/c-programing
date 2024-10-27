#include<stdio.h>
int main()
{
    int i;
    // scope of variables
    for(i=1;i<=10;i=i+2){
        printf("Hello World\n");
    }
   printf("%d",i);
    return 0;
}