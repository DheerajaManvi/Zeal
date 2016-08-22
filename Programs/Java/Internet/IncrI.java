


class IncrI {

   public static void main (String[] args ) {


      int i = 1111 ;

      i = i-- - --i ;
      System.out.println ( "i= " + i ) ;

      i = i++ + ++i ;
      System.out.println ( "i= " + i ) ;

      i = i-- - --i ;
      System.out.println ( "i= " + i ) ;

      i = i++ + ++i ;
      System.out.println ( "i= " + i ) ;



      i = --i - i-- ;
      System.out.println ( "i= " + i ) ;

      i = ++i + i++ ;
      System.out.println ( "i= " + i ) ;
   }


}
