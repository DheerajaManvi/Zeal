/*
  
Program for (a+b)*(a+b)

*/


#include<stdio.h>
main() {
   int a,b;
   int c;
   
   printf("Enter the values of a,b:");
   scanf("%d %d", &a,&b);

   c= (a*a)+(2*a*b)+(b*b);
   printf("The value of c is:%d \n",c);
}

