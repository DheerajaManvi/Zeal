import java.util.* ;

class EnviTest {

    public static void main (String[] args) {
       /* Map<String, String> env = System.getenv();
        for (String envName : env.keySet()) {
            System.out.format("%s=%s%n",
                              envName,
                              env.get(envName));
            System.out.println() ;
        }

      for (String env: args) {
            String value = System.getenv(env);
            if (value != null) {
                System.out.format("%s=%s%n",
                                  env, value);
            } else {
                System.out.format("%s is"
                    + " not assigned.%n", env);
              }
        } */

      String jh = System.getenv("SHELL") ;
      System.out.println(jh) ; 
   }
}
