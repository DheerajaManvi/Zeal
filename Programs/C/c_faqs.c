/*


*/

#include<stdio.h>

int main() {


   char name[100] ;
   char *p ;

   /* name  = "Dheeru" ; /* String literal can not be assigned to array, array always points to a memory location, and it 
                         can not be changed, so this statement is wrong.
   p = "Dheeru" ;        As string literal is  assigned to a char pointer, this works fine. 
                      */

   /* -------------------- */

   int r, i = 0 ;

   r = i++ + ++i + i + ++i ;
   printf ("\ni= %d, r=%d", i, r ) ; /* ?? i = ? */

   i = 0 ;
   /*   1      2    3    3    3    3      3     3 */
   r = ++i + ++i + ++i + i + i++ + --i + i-- + ++i ;
   printf ("\ni= %d, r=%d", i, r ) ; /* ?? i = ? */

   i=0 ;
   r = i++ + i + ++i ; 
   printf ("\ni= %d, r=%d", i, r ) ; /* ?? i = ? */

   i=0 ;
   r = i++ + i + ++i + 5++ ; 
   printf ("\ni= %d, r=%d", i, r ) ; /* ?? i = ? */

   i++ ;
   5++ ;

   printf ("\n\n");

}

