

class PrimeObject {

   int num, divby, size ;

   public boolean isPrime() { return isPrime (num) ; }

   public boolean isPrime(int n) {

       int d = 2 ;

       while( d < n ) {
          if( n % d == 0 ) { divby = d ; return false ; }
          d++ ;
       } 

       return true ;
   }

   public int[] getPrimesUpto( int n ) {
      return  getPrimesUpto ( 2, n ) ;
   }

   public int[] getPrimesUpto ( int from, int to ) {

      int[] primes = new int[to-from+1] ;
      int start = 0 ;

      for ( int i = from; i <= to; i++ ) {

         int d = 2 ;
         boolean prime = true ;

         while ( d < i && prime == true ) {
            if ( i % d == 0 ) { prime = false ; }
            d++ ;
         }          
        
         if ( prime ) { primes[start++] = i ; }

      }

      size = start ;
      return primes ;

   }

   public int getSize() { return size ; }

   public String toString() {
      return isPrime() ? "Number '" + num + "' is prime." : "Number '" + num + "' is not prime, divisible by " + divby + "." ;
   }

   public String checkPrime(int n) {
      return isPrime(n) ? "Number '" + n + "' is prime." : "Number '" + n + "' is not prime, divisible by " + divby + "." ;
   }

   public PrimeObject( int num ) { this.num = num ; }
   public PrimeObject() { num = 2 ; }

}
