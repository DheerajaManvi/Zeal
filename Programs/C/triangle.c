#include<stdio.h>
#include<math.h>
main() {

   int a,b,c,s,area;

   printf("enter the values of a,b,c:");
   scanf("%d %d %d", &a,&b,&c);

   s=(a+b+c)/2;
   area=sqrt( (s-a) * (s-b) * (s-c) );

   printf("Area of triangle=%d\n",area);
}


