class NextRand {

   public static int i = 1 ;

   public static void  randprint() {

     while( i < 999 ) {

      i++ ;
      i = i + 2 ;
      i-- ;
      i = (i * i) ;  
     }

     while( i > 999 ) {

        i = i / 10 ;

     }

      System.out.println( i ) ; 
   }

   public static void main( String[] args) {

      randprint() ;
      randprint() ;
      randprint() ;
      randprint() ;
      randprint() ;
      randprint() ;
      randprint() ;
      randprint() ;
      randprint() ;
      randprint() ;
      randprint() ;
   }
}
