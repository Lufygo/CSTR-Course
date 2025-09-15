#include <stdio.h>

#include "extern.h"

void Extern__print_thermal_step(int idx, Extern__print_thermal_out* out)
{
	printf("Thermal : index(%d)\n", idx) ;
}

void Extern__print_fast_step(int idx, int input, int output, Extern__print_fast_out* out)
{
	printf("Fast : index(%d), input(%d), output(%d)\n", idx, input, output);
}

void Extern__print_gnc_step(int idx, int input, int output, Extern__print_gnc_out* out)
{
	printf("GNC : index(%d), input(%d), output(%d)\n", idx, input, output);
}
