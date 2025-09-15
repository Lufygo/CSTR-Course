#include <stdio.h>
#include <unistd.h>
#include "third_c/third.h"

void main() {
  Third__main_out o ; /* Allocation des sorties */ 
  Third__main_mem s ; /* Allocation d l'état */
  Third__main_reset(&s) ; /* Initialisation de l'état */
  for(;;) {           /* Boucle infinie */
    usleep(1000000);
    Third__main_step(&o,&s) ;         /* Calculs */
  }
} 
