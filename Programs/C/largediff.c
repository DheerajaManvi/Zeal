/*

Finding the largest difference between two
elemnets in an array.

*/
#include<stdio.h>
int main() {

   int array[100];
   int n,i,element1,element2,difference,index1,index2,j,temp;

   printf("Enter the number of elements : ");
   scanf("%d",&n) ;

   difference = 0 ;
   
   for ( i = 0 ; i < n ; i++ ) {

      printf("Enter the %d element : " , i+1) ;
      scanf("%d",&array[ i ]); 
   }

   for ( i = 0 ; i < n ; i++ ) {

      for ( j = 0 ; j < n ; j++ ) {

         temp = array[i] - array[j];
         if ( temp < 0 ) { temp = temp * (-1) ; } 
         if ( temp > difference ) { 

            difference = temp ;
            element1 = array[i];
            element2 = array[j];
            index1 = i ;
            index2 = j ;
         }
      }
   }

   printf("\nThe largest difference is : %d " , difference ) ;
   printf("\nThe two elements are : %d , %d " , element1,element2 );
   printf("\nThe elements' respective indexes : %d , %d",index1,index2);
   
   printf("\n\n");
  
}
