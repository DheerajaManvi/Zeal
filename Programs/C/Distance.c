#include<stdio.h>
#include<math.h>

void main() {

   int d,x1,x2,y1,y2;

   printf("enter the values of x1,x2:\n");
   scanf("%d %d",&x1,&x2);

   printf("Enter the values of y1,y2:\n");
   scanf("%d %d",&y1,&y2);
   
   d=sqrt( (x2-x1) * (x2-x1) - (y2-y1) * (y2-y1) );

   printf("The distance is:%d\n",d);
}
