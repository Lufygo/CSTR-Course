#include <stdio.h>
#include "second_c/second.h"

void main() {
  Second__main_out o ; /* Allocation des sorties */ 
  Second__main_mem s ; /* Allocation d l'état */
  Second__main_reset(&s) ; /* Initialisation de l'état */
  for(;;) {           /* Boucle infinie */
    Second__main_step(&o,&s) ;         /* Calculs */
  }
} 
