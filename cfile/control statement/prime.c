//prime number
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    for(int i=2;i<=(n-1);i++)
    {
        if(n==1)
        {
            printf("the number is not prime not composite\n");
        }
        else if(n==2){
            printf("the number is prime");
        }

      else if(n%i==0){      // i is factor of n
         printf("The number is composite");
         break;
        }
        else{
            printf("the number is prime");
            break;
        }


    }
    return 0;
}
