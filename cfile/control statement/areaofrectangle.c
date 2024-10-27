#include<stdio.h>
#include<math.h>
int main()
{
    int length,breadth,area,perimeter;
    printf("Enter length,breadth");
    scanf("%d%d",&length,&breadth);
    area=length*breadth;
    perimeter=2*(length+breadth);
    if(area>perimeter)
    {
        printf("area%d is greater than perimeter%d",area,perimeter);

    }
    else
             {
        printf("area%d is smaller than perimeter%d",area,perimeter);
        
    }
    return 0;
    
}