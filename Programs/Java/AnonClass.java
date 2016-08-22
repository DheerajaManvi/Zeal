class AnonClass {

   static String s = "Manvi" ;

   public void print() {

      System.out.println(s) ;
   }

}


class A {

   public static void main( String[] args ) {

      AnonClass ac = new AnonClass() {
      public void print() {
         System.out.println("Anonymous class") ;
      } 
      };
      ac.print() ;
      ac = new AnonClass() ;
      ac.print() ;
   }
}


