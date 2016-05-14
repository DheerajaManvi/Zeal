/*
 

Sum and average using arrays.

*/

#include<stdio.h>
int main() {

   int a[100],n,i;

   printf ( "Enter any number : ");
   scanf ("%d", &n );

   a[n] = 0 ;

   for ( i = 0 ; i < n ; i++ ) {

      printf ( "Enter the %d element : ", i+1 );
      scanf ("%d", &a[i]);

      a[n] = a[n] + a[i] ;
   }

   a[n+1] = a[n]/n ;  
   printf("\nArray : [ ");

   for ( i = 0 ; i <= n+1 ; i++ ) {
  
      printf("%d",a[i]);
      if( i < n+1 ){ printf (", "); }
   }

   printf(" ]");
   
/*   printf("Sum : %d\n" , a[n]);
   printf("Average : %d\n",a[n+1]);
*/
   printf("\n\n");
}
