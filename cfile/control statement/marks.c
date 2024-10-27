#include<stdio.h>
int main(){
    int n;
    printf("Enter a percentage:");
    scanf("%d",&n);
         // more tha 80 a
         // more tha 60 b
         // more tha 40 c
         // less than 40 fail
         if(n>80)
         {
            printf("You have secured a grade A");

         }
          else if(n>60)
         {
            printf("You have secured a grade B");

         }
          else if(n>40)
         {
            printf("You have secured a grade c");

         }
         else{
            printf("you are cfailed");
         }
        
        

    return 0;
}