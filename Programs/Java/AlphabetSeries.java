/*

*/

class AlphabetSeries {

   public static char alph = 'a' ;

   public static void printalph() {

      while ( alph <= 'z' ) {

         System.out.println( alph ) ;
         alph++ ;

      }
   }

   public static void main( String[] args ) {

      printalph() ;
   }
}
