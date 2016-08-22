import java.util.* ;

class TestArray {

   public static void main( String[] args) {

      int[] ia = new int[10] ;
      int[] intArray1 = { 1 , 2 , 3 , 4 , 5 } ;
      int count1 = 5 ; 
      int i ; 
      
      String[] sa = new String[5] ; 
      String s ;

      Scanner sc = new Scanner(System.in) ;

      /*for( i = 0 ; i < 10 ; i++ ) {

         System.out.print( "a[ " + i +  " ] = ") ;
         ia[i] = sc.nextInt() ;
      }*/

      int i1 = 0 ;  

      for( i = 0 ; i < 5 ; i++ ) {

         System.out.print("Enter any String : " ) ;
         s = sc.nextLine() ;
      }  

      /*while ( i1 < 10 ) {
         System.out.print ( "a[" + (i1+1) + "] =" +ia[i1] ) ;
         i1++ ;
      } 

      System.out.println( "\nElement I   : " + intArray1[0] ) ; 
      System.out.println( "Element II  : " + intArray1[1] ) ; 
      System.out.println( "Element III : " + intArray1[2] ) ; 
      System.out.println( "Element IV  : " + intArray1[3] ) ; 
      System.out.println( "Element V   : " + intArray1[4] ) ;  */

   }
}
