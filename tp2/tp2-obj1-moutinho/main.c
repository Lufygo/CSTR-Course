#include <stdio.h>
#include "second_c/second.h"

void main() {
  int rst;
  Second__rcounter_out o ; /* Allocation des sorties */ 
  Second__rcounter_mem s ; /* Allocation d l'état */
  Second__rcounter_reset(&s) ; /* Initialisation de l'état */
  for(;;) {           /* Boucle infinie */
	printf("Inputs:");
	scanf("%d",&rst) ; /* Lecture des entrées */
    Second__rcounter_step(rst,&o,&s) ;         /* Calculs */
    printf("Result: o=%d\n",o.cnt) ;      /* Ecriture des sorties */
  }
} 
