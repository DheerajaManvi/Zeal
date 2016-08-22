import java.io.* ;
import static java.lang.System.out ;

class SmallProg {


   public static void print() {

      System.out.println("Java") ;

   }


   public static void main( String[] a) {
      PrintStream out = System.out ;
      out.println("Hello World!") ;
      print() ;
   
   }
}
