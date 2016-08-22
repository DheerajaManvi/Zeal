

class StaticTrail {

    private String name ;
 
  /*  InitBlocksDemo(int x) {
        System.out.println("In 1 argument constructor, name = " + this.name);
    }
 
    InitBlocksDemo() {
        name = "prasad";
        System.out.println("In no argument constructor, name = " + this.name);
 
    } */
 
    /* First static initialization block */
    static {
        System.out.println("In first static init block ");
    }
 
    /* First instance initialization block  */
    {
        System.out.println("In first instance init block, name = " + this.name);
    }
 
    /* Second instance initialization block */
    {
        System.out.println("In second instance init block, name = " + this.name);
    }

}
class StaticTrailOne extends StaticTrail{

       static {
          System.out.println("=> Trail1") ;
       }

      {
       System.out.println("=> Instance 1") ;
      }

      {
       System.out.println("=> Instance 2") ; 
      }


      public static void main( String[] args) {

         StaticTrailOne st1 = new StaticTrailOne() ;
         StaticTrailOne st2 = new StaticTrailOne() ;

      }


}
