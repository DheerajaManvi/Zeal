
import java.util.* ;   

class FactEx {

   static int fact ;

   public void fact() {

      int f = 1 ;

      for( int i = 1 ; i <= fact ; i++ ) {

         f = f * i ;
      }

      System.out.println("The factorial of " + fact + " is : " + f ) ; 
   }

   public static void main( String[] args ) {

       Scanner sc = new Scanner(System.in) ;
       System.out.print("Enter any number : " ) ;
       fact = sc.nextInt() ;  

       FactEx fx = new FactEx() ;
       fx.fact() ;

   }




}
