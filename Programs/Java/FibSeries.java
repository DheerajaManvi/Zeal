/*

*/

class FibSeries {

   public static int first = 0 ;
   public static int second = 1 ;

   public static void printfib() {

      int sum = first + second ; 
      int temp = first ;
      first = second ;
      second = sum ; 

      System.out.println(temp) ;
   }
   
   public static void main ( String[] args ) {

       printfib() ;
       printfib() ;
       printfib() ;
       printfib() ;
       printfib() ;
       printfib() ;
       printfib() ;
       printfib() ;

   
   }

}
