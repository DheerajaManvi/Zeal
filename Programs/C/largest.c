/*

Print the largest number

*/


#include<stdio.h>

main()  {

   int n,i,v,b,s;

   printf("enter any number: ");
   scanf("%d",&n);

   i=2;

   printf("enter the nos: ");
   scanf("%d",&v);

   b=v; /* Assume first number is biggest */
   s=v;


   while(i<=n) {

      printf("enter the nos: ");
      scanf("%d",&v);    

      if(v>b) {

         b=v;
      }

      if(v<s) {

         s=v;
      }
   
      i=i+1;
   }
   
   printf("\nThe largest no is %d \n",b);
   printf("The smallest no is %d \n",s);
 
   printf("\n") ;

}


