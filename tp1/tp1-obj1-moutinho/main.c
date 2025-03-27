#include <stdio.h>
#include "hept_functions_c/hept_functions.h"

void main() {
    int x,y ;            /* Allocation des entrées */
    Hept_functions__myfun_out o ; /* Allocation des sorties */ 
    for(;;) {            /* Boucle infinie */
      printf("Inputs:"); scanf("%d%d",&x,&y) ; /* Lecture des entrées */
      Hept_functions__myfun_step(x,y,&o) ;              /* Calculs */
      printf("Result: z=%d t=%d\n",o.z,o.t) ;  /* Ecriture des sorties */
    }
} 