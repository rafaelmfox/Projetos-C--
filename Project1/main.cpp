#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>

main (){
     start:
          
     float n1,n2;
     char op;
     
     printf ("Digite numero 1\n");
     scanf ("%f",&n1);
     printf ("Digite a operasao \n");
     scanf ("%s",&op);     
     printf ("Digite numero 2\n");
     scanf ("%f",&n2);
     
     
     
     if (op=='+'){
     printf ("%f + %f = %f\n",n1,n2,n1+n2);
     }
     else     if (op=='-'){
     printf ("%f - %f = %f\n",n1,n2,n1-n2);
     }
     else     if (op=='*'){
     printf ("%f * %f = %f\n",n1,n2,n1*n2);
     }
     else     if (op=='/'){
     printf ("%f / %f = %f\n",n1,n2,n1/n2);
     }
     
     system ("pause");
     system("cls");
     goto start;
     }
