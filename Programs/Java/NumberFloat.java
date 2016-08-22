

class NumberFloat {

   public static void methodCompare() {

       System.out.println("Comaprision : " +Float.compare( 4.3f , 5.5f ) ) ;
   }

   public static void methodFloatToInt() {


      System.out.println("Conversion : "   +Float.floatToIntBits(.8f) ) ;
   }

   
   public static void methodIsInfinite() {

      Float floatObject2 = Float.valueOf(1/(float)(0.0));
      System.out.println("Infinite : " +floatObject2.isInfinite() ) ;

   }

   public static void methodNotNumber() {

      System.out.println("Not a number : " +Float.isNaN(88) ) ;

   }

   public static void main ( String[] args ) {

      methodCompare() ; 
      methodFloatToInt() ;
      methodIsInfinite() ; 
      methodNotNumber() ;
   }
}
