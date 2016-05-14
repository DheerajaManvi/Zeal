/* 

Finding the nearest element to zero.

*/

#include<stdio.h>
int main() {

   int array[100],i,n,element,temp;

   printf("Enter any number : " );
   scanf("%d", &n) ;

   for( i = 0 ; i < n ; i++ ) {

      printf("\nEnter the %d element : " , i+1) ;
      scanf("%d",&array[i]) ;
   }

   element = array[0];

   for( i = 0 ; i < n ; i++ ) {

      if(array[i] < 0 ) {

         temp = array[i];
         temp = temp * (-1);
      }

      if(element > array[i]) {

         element = array[i];
      }
   }

   printf("Nearest element to zero : %d ",element);

   printf("\n\n");
}
   
   
