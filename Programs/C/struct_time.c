/*

*/

#include<stdio.h>

struct Time {

  int hour,min,sec ;
} ;

main() {

   struct Time t1,t2,t3,t4 ;

   printf("\n") ;
   
   printf("Enter T1 Time[hh:mm:ss] : ") ;
   scanf("%d:%d:%d",&t1.hour, &t1.min, &t1.sec) ;

   printf("Enter T2 Time[hh:mm:ss] : ") ;
   scanf("%d:%d:%d",&t2.hour, &t2.min, &t2.sec) ;

   t3.hour = t1.hour - t2.hour ;
   t3.min = t1.min - t2.min ;
   t3.sec = t1.sec - t2.sec ;

   
   t4.hour = t1.hour + t2.hour ;
   t4.min = t1.min + t2.min ;
   t4.sec= t1.sec + t2.sec ;
   

   printf("\nTime Difference = %02d:%02d:%02d",t3.hour,t3.min,t3.sec) ; 
   printf("\nAddition : %02d:%02d:%02d",t4.hour,t4.min,t4.sec) ;

   printf("\n\n") ;

}

 
