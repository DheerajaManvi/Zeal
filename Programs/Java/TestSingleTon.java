

class TestSingleTon {


   public static void main ( String[] args ) {

      SingleTon st = SingleTon.getInstance( "TestSingle") ;
      st.p() ;

      System.out.println ( st ) ;

      st = SingleTon.getInstance( "Tested......." ) ;
      st.p() ;
      System.out.println ( st ) ;

      st = st.getNewInstance() ;
      System.out.println ( st ) ;

   }

}



