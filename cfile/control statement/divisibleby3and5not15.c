    #include<stdio.h>
    int main()
    {
        int n;
        printf("Enter any number: ");
        scanf("%d",&n);
        // if(n%5==0 || n%3==0){
        //     if(n%15!=0){
        //         printf("Tne number is divisible by 5 or 3");
        //     }
        //     else{
        //         printf("The number is divisible by 15");
        //     }
        // }
        if((n%5==0 || n%3==0 )&& n%15!=0){
            printf("the number is divisible by 5 or 3 but not 15");
        }
        else{
            printf("the number is not divisible by 3 or 5");
        }
        return 0;

    }