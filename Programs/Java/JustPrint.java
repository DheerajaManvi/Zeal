/*

*/

class JustPrint {

   private int a ;

   public void printA() {

     System.out.println("A : " +a ) ;
   }

   public static void main( String[] args ) {

       JustPrint jp = new JustPrint() ;

       jp.a = 11 ;
       jp.printA() ;

       jp.a = 12 ;
       jp.printA() ;
    
   }

}
