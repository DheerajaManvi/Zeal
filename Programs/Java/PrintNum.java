import java.util.* ;

class PrintNum {

   Scanner sc = new Scanner(System.in) ;

   void recursive() {

      System.out.print("Enter any number : ") ; 
      int n = sc.nextInt() ;
      if ( n == -111 ) { return ; } 
      recursive() ; 

      System.out.println( n ) ;
   } 

   public static void main ( String[] args ) {

      PrintNum pn = new PrintNum() ;
      pn.recursive() ;
   }

}
