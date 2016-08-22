/*


*/

#include<stdio.h>

struct Point {

   int x,y ;

} ;


void readPoint  ( struct Point * ) ;
void printPoint ( struct Point ) ;

main() {

   struct Point p1, p2 ;
   float retval ;

   readPoint( p1 ) ;
   readPoint( p2 ) ;

   printf ("\n%d", p1.x ) ;
   printf ("\n%d", p2.x ) ;

   printPoint(p1) ;
   printPoint(p2) ;
}

void readPoint( struct Point *p) {

   printf("Enter the x-cordinate : ") ;
   scanf("%d",p.x) ;

   printf("Enter the y-cordinate : ") ;
   scanf("%d",p.y) ;

}

void printPoint( struct Point pp) {

   printf(" ( X , Y ) : ( %d , %d ) ", pp.x,pp.y) ;

   printf("\n\n") ;

}
