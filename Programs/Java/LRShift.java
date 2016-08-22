

class LRShift {


   public static void main ( String[] args ) {

      int a = 1,i = 1  ;
      while (a != 0 ) {

         a = a << 1 ;
         System.out.println( "Left " + i + ": "  + a ) ;
         i++ ;
      }

      int b = 32 ;

      while(b != 0 ) {
         b = b >> 1 ;
         System.out.println( "Right : " + b ) ;
      }

      int c = -32 ; 
      while( c != 0 ) {
         c = c >>> 1 ;
         System.out.println( "URight : " + c ) ;

      }
   }
}
