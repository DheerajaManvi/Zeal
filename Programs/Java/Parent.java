
class Parent {

   Parent() {

      normal() ;
      name() ;
   }

   private void normal() {

      System.out.println("Normal - Parent") ;
   } 

   private void name() {

      System.out.println("Name-Parent") ;
   }
}

class Child extends Parent {

   private void normal() {

      System.out.println("Normal - child") ;
   }

   private void name() {

      System.out.println("Name - child") ;
   }

   public static void main( String[] args ) {

        //Child c  = new Child() ;
        Parent p = new Child() ;
   }
} 
