

class TestStaticInstance {


   public static void main ( String[] args ) {

      StaticInstance.print() ;

      StaticInstance.main(args) ;
     
      
      StaticInstance si = new StaticInstance() ;
      si.print("JJJJ") ;
    

   }

}
