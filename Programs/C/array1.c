/*

Addition,multiplication,subtraction,min-max
using arrays

*/

#include<stdio.h>
main() {

   int i,idx,sum,p,s;
   int n, max, min;
   int r[100];

   printf("Enter any number: ");
   scanf("%d",&n);

   i = 1; idx = 0;

   while ( i <= n) {

      printf("Enter %d number: ",i);
      scanf("%d",&r[idx]);
      i++;
      idx++;
   }


   i = 0;
   sum = 0;

   while ( i < n ) {

      printf("%d",r[i]);

      if ( i != ( n -1 ) ) { printf (" + ") ; } else { printf ( " = " ) ; }

      sum = sum + r[i];
      i++;
   }
   printf(" %d",sum);
   printf("\n");

   i = 0;
   p = 1;

   while ( i < n ) {

      printf("%d",r[i]);
      if ( i != ( n -1 ) ) { printf (" * ") ; } else { printf ( " = " ) ; }
      p = p * r[i];
      i++;
   }

   printf("%d",p);
   printf("\n");

   i = 0;
   s = 0;

   while ( i < n ) {

      printf("%d",r[i]);
      if ( i != ( n -1 ) ) { printf (" - ") ; } else { printf ( " = " ) ; }
      s = s - r[i];
      i++;
   }

   printf("%d",s);
   printf("\n");

   i = 1;
   max = r[0] ;
   min = r[0] ;

   while ( i < n ) {

      if ( r[i] > max ) { max = r[i] ; } 
      if ( r[i] < min ) { min = r[i] ; } 

      i++ ;
   }
   
   printf("\n%d is the largest  number", max );
   printf("\n%d is the smallest number", min );


   printf ("\n");


}

