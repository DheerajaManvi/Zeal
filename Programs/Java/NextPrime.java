

class NextPrime {

   public static int prime = 1 ;

   public static int nextPrime() {

      int d = 2 ;
      prime++ ;

      while ( d < prime ) {

         if ( prime % d == 0 ) { 
            prime++ ;
            d = 2 ;
            continue; 
         }

         d++ ;
      }

      return prime ;
   }


}
