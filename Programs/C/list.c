/*

   Mini Project, to implement all list tasks.

*/


#include <stdio.h>

main() {

   int choice, n, tempn , newelement, felement , newd;
   int i,ip,temp,fe,element,index,tempi,p1,pc ;
   int perfectstart,perfectcount,perfectindex ; 
   int data[100] ;
   int datatemp[100] ;

   tempn = 0 ;

   do {

      printf ("\n\n");
     
      printf ("\n\t----------------------");
      printf ("\n\t1  => Data Entry") ;
      printf ("\n\t2  => Display List") ;
      printf ("\n\t3  => Append to List") ;
      printf ("\n\t4  => Add First") ;
      printf ("\n\t5  => Insert At") ;
      printf ("\n\t6  => Find Element") ;
      printf ("\n\t7  => Delete First") ;
      printf ("\n\t8  => Delete last") ;
      printf ("\n\t9  => Delete at") ;
      printf ("\n\t10 => Erase all") ;
      printf ("\n\t11 => Display Entire Array") ;
      printf ("\n\t12 => Find index ") ; 
      printf ("\n\t13 => Perfect number");
      printf ("\n\t14 => prime number");
      printf ("\n\t15 => max - min");
      printf ("\n\t0  => Exit") ;

      printf ("\n\t----------------------");
      printf ("\n\tEnter Choice: " ) ;
      scanf  ("%d", &choice ) ;
      printf ("\t----------------------");

      if ( choice == -1 ) {

          for ( i = 0; i < tempn; i++ ) {

             data[i] = datatemp[i] ;

          }

          n = tempn ;

      }

      if ( choice == -2 ) {

         for ( i = 0 ; i < 10 ; i++ ) {

            data[i] = i+1;
            datatemp[i] = i+1 ;

         }

         n = 10; tempn = 10 ;

      }

      if ( choice == -3 ) {

         int even = 2 ;

         n = 20 ; tempn = 20 ;

         
         for ( i = 0 ; i < n ; i++ ) {

              data[i] = even ;
              datatemp[i] = even ;
              even = even + 2 ;

         }

      }

      if ( choice == 1 ) {

         printf ("\nEnter No Of Elements: " ) ;
         scanf  ("%d", &n ) ;
         tempn = n ;

         for ( i = 0 ; i < n ; i++ ) {

            printf ("Enter %d Element: ", i+1 ) ;
            scanf  ("%d", &data[i] ) ;
            datatemp[i] = data[i] ;

         }

      }

      if ( choice == 2 ) {

         printf ("\n\nARRAY: [ " ) ;

         for ( i = 0 ; i < n ; i++ ) {

            printf ("%d", data[i] ) ;
            if ( i != (n -1) ) { printf (", " ) ; }

         }
         printf (" ]\n\n" ) ;

      }

      if ( choice == 11 ) {

         printf ("\n\nFull List: [ " ) ;

         for ( i = 0 ; i < 100 ; i++ ) {

            printf ("%d", data[i] ) ;
            if ( i != 99 ) { printf (", " ) ; }

         }
         printf (" ]\n\n" ) ;

      }

      if ( choice == 3 ) {

         printf("\nAppend any element: ");
         scanf("%d", &newelement);

         data[n] = newelement;
         n++;
      } 

      if ( choice == 4 ) {

         printf("\nElement to be entered in first : ");
         scanf("%d",&felement);

         for ( i = n ; i > 0 ; i--) {

            data[i] = data[i - 1];
         } 

         data[0] = felement;
         n++;
      }

      if ( choice == 55 ) {

         printf("\nEnter the position : ");
         scanf("%d",&ip);

         printf("\nEnter any number: ");
         scanf("%d", &newd);

         if ( ip >= n ) {  
       
            for ( temp = i ; temp > 0 ; temp -- ) {

               data[ip] = data[ip - 1];
            }

            data[ip] = newd;
            n++;
         }
      }    

      if ( choice == 5 ) {

         printf ("\nEnter any Number: " ) ;
         scanf  ("%d", &newd ) ;

         printf ("\nEnter position (%d, %d): ", 0, n-1 ) ;
         scanf  ("%d", &ip ) ;

         if ( ip < 0 || ip > n ) { 

            printf ("\nWarn: Insert Position should be between (%d, %d) including", 0, n-1 ) ;
            printf ("\nWarn: can not continue");
            continue ;

         } 

         for ( i = n-1 ; i >= ip ; i-- ) {
            data[i+1] = data[i] ;
         } 

         data[ip] = newd ;
         n++;

      }


/*      if ( choice == 6 ) {

         printf("\n Enter the position of element to be deleted : ");
         scanf("%d",&ip);

      } 
*/

        if ( choice == 6 ) {

           printf("\n Enter an element to be found : ") ; 
           scanf("%d",&fe);

           for ( i = 0 ; i < n ; i++ ) {

              if ( fe == data [ i ] ) { 
              
                 printf(" Index : %d", i );
              }
          }
        }

       if ( choice == 12 ) {

          printf("\n Enter the index : ");
          scanf("%d", &index);
    
          element = data[index] ;
          printf(" Element : %d",element);
      }

      if ( choice == 13 ) { 

         int d,sum ;
         perfectstart = 2 ;
         perfectcount = 10;
         perfectindex = 0; 

         while ( perfectindex < perfectcount ) {
     
            sum = 1;

            for ( d = 2 ; d < perfectstart ; d++ ) {

               if ( perfectstart % d == 0 ) { 
               
                  sum = sum + d ;
               }
            }

           if ( sum == perfectstart ) {
        
              data[perfectindex] = perfectstart ;
              perfectindex++ ;
              printf("\n%d", perfectstart );
           }
 
           printf("\n%d", perfectstart );
           perfectstart++ ;

            
         }
      }   
    
   
      if ( choice == 9 ) {

         int del ;

         printf ( " \nEnter the position of deletion : ");
         scanf( "%d", & del );

         for ( i = del; i < n ; i++ ) {
       
            data[ i ] = data[i + 1] ;
         }
         n = n - 1;
      }

      if ( choice == 10 ) {

         data[ i ] = data[0 ];
      }

    if ( choice == 14 ) {

       int d,p,primestart,primecount,primeindex;

       primeindex = 0 ;
       primecount = 20 ;
       primestart = 2;
     
       while ( primeindex < primecount ) {
   
          p = 1;

          for ( d = 2 ; d < primestart && p == 1 ; d++ ) { 

             if ( primestart % d == 0 ) { p = 0 ; }

          }

          if ( p == 1) { 
             data[primeindex] = primestart; 
             datatemp[primeindex] = primestart; 
             primeindex++; 
          }

          primestart++ ;

       }

       n = primecount ;
       tempn = primecount ;

    }

    if ( choice == 15 ) {

       int max,min, i,maxloc,minloc;
       i = 0 ;
       max = data[ 0 ] ;

       for ( i = 1 ; i <= n - 1 ; i++ ) {
            
          if( max < data[ i ] ) {
               
             max = data[ i ];
             maxloc = i;
          }
       }
        printf ("\n\nARRAY: [ " ) ;

         for ( i = 0 ; i < n ; i++ ) {

            printf ("%d", data[i] ) ;
            if ( i != (n -1) ) { printf (", " ) ; }

         }
         printf (" ]\n\n" ) ;

       printf("\nMax : %d",max);
       printf("\nMaxlocation : %d",maxloc );

       min = data[ 0 ] ;
       i = 0 ;
       minloc = 0 ;

       for ( i = 1 ; i <= n - 1 ; i++ ) {

          if( min > data[ i ] ) { 

             min = data[ i ];
             minloc = i ;
          }
       }

       printf("\nMin : %d",min);
       printf("\nMinlocation : %d",minloc );

    }


   } while ( choice != 0 ) ; 

   printf ("\n\n");
   
}
