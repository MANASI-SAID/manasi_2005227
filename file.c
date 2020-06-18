#include <stdio.h>
#include <stdlib.h>

int main()
{
   int x,y;
   printf("Enter x coordinate: \n");
   scanf("%d",&x);
   printf("Enter y coordinate: \n");
   scanf("%d",&y);

   if(x>0 && y>0)
    printf("1st Quadrant");
   else if(x>0 && y<0)
    printf("2nd quadrant");
   else if(x<0 && y<0)
    printf("3rd Quadrant");
   else if("x<0 && y>0")
    printf("4th Quadrant");

}
