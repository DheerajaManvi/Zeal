

class SingleTon {

   static SingleTon sg = null ;
   static String s = null ;


   private SingleTon() {
   }


   private SingleTon( String s ) {
      this.s = s ;
   }

   public static SingleTon getInstance( String s) {

      if ( sg == null ) {

         sg = new SingleTon( s ) ;
      }

      return sg ;

   }

   public static SingleTon getNewInstance() {

         return ( new SingleTon( ) ) ;

   }



   public void p() {

      System.out.println ( "Single Ton...." + s  ) ;

   }

   public static void main ( String[] args ) {

      SingleTon st = new SingleTon() ;

      st.p() ;


   }

}



