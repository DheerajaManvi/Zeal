

class Trail {

   public void toString(char c) {

      System.out.println("Inside toString()") ;
   }

   public static void main( String[] args ) {

      Trail t = new Trail() ;
      t.toString('c') ;
   }
}
