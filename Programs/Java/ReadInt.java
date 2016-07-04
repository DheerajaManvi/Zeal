import java.util.Scanner ;

class ReadInt {

   public static void main ( String[] args ) {

      Scanner sc = new Scanner ( System.in ) ;

      System.out.print ("Enter a Value: " ) ;
      int i = sc.nextInt() ;

      System.out.print ("Enter a float Value: " ) ;
      float f = sc.nextFloat() ;


      System.out.println ( "i= " + i + ", f= " + f) ;

   }

}
