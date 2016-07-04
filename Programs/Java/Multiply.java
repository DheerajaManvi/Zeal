/*

*/

class Multiply {

    public static int i = 0 ; 

    public static void domultiply() {

        i++ ;
        int m  = i * (i + 1) * (i + 2) ;
        System.out.println( m ) ;

    }

    public static void main( String[] args ) {


       domultiply() ;
       domultiply() ;
       domultiply() ;
       domultiply() ;
    }
  


}
