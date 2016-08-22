import java.util.* ;

class Switch {

   public static void main( String[] args ) {

      String day ;

      Scanner sc = new Scanner(System.in) ;

      System.out.print("Enter a day:  " ) ;
      day = sc.nextLine() ;

      switch (day) {
        case "Monday":
        case "Tuesday":
        case "Wednesday":
            System.out.println("=>boring");
            break;
        case "Thursday":
            System.out.println("=>getting better");
        case "Friday":
        case "Saturday":
        case "Sunday":
            System.out.println("=>much better");
            break;
      }
   }
}
