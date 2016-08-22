
class StaticA {

    static int i = 1111;
 
    static
    {
        i = i-- - --i;
    }
 
    {
        i = i++ + ++i;

        System.out.println ( "Howwwww?" ) ;
    }

}


class StaticB extends StaticA {

    static {
        i = --i - i--;
    }
 
    {
        i = ++i + i++;
    }

   public static void main (String[] args ) { 

      StaticB sb = new StaticB() ;

      System.out.println ( sb.i ) ;

   }

}
