import java.util.* ;

class ArraySort {

   public static void main ( String[] args ) {
  
      int a[] = { 9 , 3 , 4 , 10 , -1 } ;

      System.out.println("GIVEN ARRAY :") ;

      for ( int number : a ) {

         System.out.println("Number = " +number ) ;
      }
      
      Arrays.sort( a ) ;

      System.out.println("SORTED ARRAY :") ;

      for (int number : a ) {

         System.out.println("Number = " +number ) ;
      }
   }
} 
