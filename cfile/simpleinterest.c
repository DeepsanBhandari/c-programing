#include<stdio.h>
  float main()
{
    float p,t,r,i;
      printf("Enter the principal,time and rate\n");
        scanf("%f%f%f",&p,&t,&r);
          i=(p*t*r)/100;
            printf("The simple interest is=%f",i);
              return 0;

}