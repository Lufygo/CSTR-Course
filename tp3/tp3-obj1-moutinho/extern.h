#ifndef EXTERN_H
#define EXTERN_H

#include "extern_types.h"

void Extern__print_thermal_step(int idx, Extern__print_thermal_out* out);
void Extern__print_fast_step(int idx, int input, int output, Extern__print_fast_out* out);
void Extern__print_gnc_step(int idx, int input, int output, Extern__print_gnc_out* out);

#endif /* EXTERN_H */
