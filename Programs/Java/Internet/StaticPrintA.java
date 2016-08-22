
class StaticPrintA {

    static int i = 1111;
 
    static
    {
        System.out.println ( "Howwwww? 11" ) ;
    }
 
    {
        System.out.println ( "Howwwww? 12" ) ;
    }
    {
        System.out.println ( "Howwwww? 13" ) ;
    }

}


class StaticPrintB extends StaticPrintA {

    static {
        System.out.println ( "Howwwww? 21" ) ;
    }
 
    {
        System.out.println ( "Howwwww? 22" ) ;
    }
    {
        System.out.println ( "Howwwww? 23" ) ;
    }

   public static void main (String[] args ) { 

      StaticPrintB sb = new StaticPrintB() ;


   }

}
