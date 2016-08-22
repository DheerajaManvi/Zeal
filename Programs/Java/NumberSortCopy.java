import java.io.* ;
import java.util.* ;

class NumberSortCopy {

   public static void main( String[] args ) throws Exception {

      Properties p = new Properties() ;
      p.load(new BufferedInputStream(new FileInputStream( "Numbers.txt" ))) ;
      System.out.println(p.getProperty("Line1")) ; 

      

 
   }
}
