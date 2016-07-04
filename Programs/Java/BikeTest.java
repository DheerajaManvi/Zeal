

class BikeTest extends Bike{

   public void print() {

      System.out.println("Sports bike") ;
   }

   public static void main( String[] args ) {

      Bike b = new BikeTest() ;
      b.print() ;
   }


}
