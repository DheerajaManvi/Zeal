import java.util.* ;


class ListExample {

   static int choice ;
   String[] string_array ;
  
   List l = new ArrayList() ;

   public static void print() {

      System.out.println("==============================") ;
      System.out.println("\t1.Add String.") ;
      System.out.println("\t2.Remove String.") ;
      System.out.println("\t3.Clear.") ;
      System.out.println("\t4.Display.") ;
      System.out.println("\t0.Exit.") ;  
      System.out.println("==============================") ;
   }

   public void byChoice() {

      while( choice != 0 ) {

         if( choice == 1 ) {

            int size ;

            String s ;
            Scanner sc = new Scanner(System.in) ;
            System.out.print("Enter a String : ") ; 
            s = sc.nextLine() ;

            l.add(s) ;

         /*   for( int i = 0 ; i < 100 ; i++ ) {

               string_array[i] = l.add(s) ;

            }  */
            size = l.size() ;

            System.out.println("Size : " +size ) ;

            break ;
       }

         if( choice == 2 ) {

             l.toArray() ;
             break ;

         }

         if( choice == 3 ) {

            l.removeAll() ;
            break ;
         }

      }
   }


   public static void main( String[] args ) {

      ListExample le = new ListExample() ;
      le.print() ;

      Scanner sc = new Scanner(System.in) ;
      System.out.print("Enter choice : ") ; 
      choice = sc.nextInt() ;

      le.byChoice() ;
      le.print() ;

        
   }
}
