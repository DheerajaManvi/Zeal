/* 


*/

class PrimeEx {

   public static void nextprime() {

      int i = 2 ;
      int q = 1 ;
      int d = 2 ;
       
    while( i < d ) {

          if( i % d == 0) { q = 0 ; } 

          d++ ;
       
       }

       if ( q == 1 ) { System.out.println( +i ) ; } 
       i++ ;
   }

}
