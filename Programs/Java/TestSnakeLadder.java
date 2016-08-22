import java.util.* ;

class TestSnakeLadder {


    public static void main(String[] args ) {

       SnakeAndLadder sal1 = new SnakeAndLadder ( "Dheeru" )  ;
       SnakeAndLadder sal2 = new SnakeAndLadder ( )  ;
       SnakeAndLadder sal3 = new SnakeAndLadder ( )  ;
       int c = 0 ;
       int n ;

       Scanner sc = new Scanner(System.in) ;

       System.out.print("Enter the number of players : ") ;
       n = sc.nextInt() ;

       while ( true ) {

          c = 0 ; 

          if ( ! sal1.getStatus() ) {  c= 1;  sal1.nextRoll() ; try { Thread.sleep ( 1 * 1000 ) ; } catch ( Exception e ) { } }
          if ( ! sal2.getStatus() ) {  c= 1;  sal2.nextRoll() ; try { Thread.sleep ( 1 * 1000 ) ; } catch ( Exception e ) { } }
          if ( ! sal3.getStatus() ) {  c= 1;  sal3.nextRoll() ; try { Thread.sleep ( 1 * 1000 ) ; } catch ( Exception e ) { } }

          if ( c == 0 ) { break ; } 

       }

       System.out.println ("================================" ) ;
       System.out.println ( SnakeAndLadder.result ) ;


    }


}
