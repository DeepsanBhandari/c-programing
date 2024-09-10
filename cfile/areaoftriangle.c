// Area of scalane triangle
//  Area=√(s(s-a)(s-b)(s-c)
 #include<stdio.h>
  #include<math.h>
   float main()
{
    float s,a,b,c,Area;
      printf("Enter the three sides of triangle \n");
        scanf("%f%f%f",&a,&b,&c);
          s = (a + b + c) / 2;
            Area=sqrt ( s * (s-a) * (s-b) * (s-c)) ;                   //use small brackets only no curly and big
              printf("the required area of triangle is=%0.2f",Area);    //%0.1f gives one digit after points
                 return 0;                                               //%0.2f gives two digit after points
 }