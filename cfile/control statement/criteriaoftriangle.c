#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    printf("Enter the three sides of triangle:\n");
    scanf("%d%d%d",&a,&b,&c);
         
         if((a+b)>c && (b+c)>a && (c+a)>b)
         {
            printf("it can be sides of triangle\n");
         }
         else 
         {
               printf("it cannot be sides of triangle\n");
         }
        
         return 0;

}