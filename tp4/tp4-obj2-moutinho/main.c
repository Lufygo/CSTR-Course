#include <stdio.h>
#include <unistd.h>
#include "scheduler_c/scheduler.h"

void main() {
  Scheduler__main_out o ; /* Allocation des sorties */ 
  Scheduler__main_mem s ; /* Allocation d l'état */
  Scheduler__main_reset(&s) ; /* Initialisation de l'état */
  char buffer[2];
  for(;;) {           /* Boucle infinie */
    Scheduler__main_step(&o,&s) ;         /* Calculs */
    fgets(buffer, 2, stdin);
  }
} 
