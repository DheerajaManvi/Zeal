/*

*/

public abstract class Abstraction {

   public String toString() {

      System.out.println("STRING") ;
      return "" ;
   }

   public void print() {
      System.out.println("PRINT") ; 
   }

   public Abstraction() {

      System.out.println("From abstract class......Dheeru") ; 
   }

   public abstract void toString1() ; 
   public void toString1(int i) {
   } 

/*   public static void main( String[] args ) {
   
      new Abstraction() ;
      
   } */
}
