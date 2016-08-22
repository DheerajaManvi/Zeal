
class MultiArrayTest {

   public static void main ( String[] args ) {

      int mul_arr[][] = new int[3][] ;
      int i,j,k = 0 ;

       mul_arr[0] = new int[1] ;
       mul_arr[1] = new int[2] ;
       mul_arr[2] = new int[8] ;
        

      for( i = 0 ; i < 3 ; i++ ) 
         for( j = 0 ; j < i ; j++ ) {
            mul_arr[i][j] = k ;
            k++ ;  
         }  
      

      for( i = 0 ; i < 3 ; i++ ) {
         for( j = 0 ; j < i ; j++ ) 
            System.out.print( mul_arr[i][j] + " " ) ;
            System.out.println() ;
      }
   }
}
