/* --- Generated the 25/4/2025 at 12:39 --- */
/* --- heptagon compiler, version 1.05.00 (compiled thu. mar. 27 11:52:18 CET 2025) --- */
/* --- Command line: /home/lufygo/.opam/heptagon/bin/heptc -target c third.ept --- */

#ifndef THIRD_H
#define THIRD_H

#include "third_types.h"
#include "extern.h"
typedef struct Third__fast_mem {
  int idx;
} Third__fast_mem;

typedef struct Third__fast_out {
  int x;
} Third__fast_out;

void Third__fast_reset(Third__fast_mem* self);

void Third__fast_step(int y, Third__fast_out* _out, Third__fast_mem* self);

typedef struct Third__gnc_mem {
  int idx;
} Third__gnc_mem;

typedef struct Third__gnc_out {
  int x;
} Third__gnc_out;

void Third__gnc_reset(Third__gnc_mem* self);

void Third__gnc_step(int y, Third__gnc_out* _out, Third__gnc_mem* self);

typedef struct Third__thermal_mem {
  int idx;
} Third__thermal_mem;

typedef struct Third__thermal_out {
} Third__thermal_out;

void Third__thermal_reset(Third__thermal_mem* self);

void Third__thermal_step(Third__thermal_out* _out, Third__thermal_mem* self);

typedef struct Third__condact_f_params_31__mem {
  int v_2;
  Third__fast_mem fast;
} Third__condact_f_params_31__mem;

typedef struct Third__condact_f_params_31__out {
  int x;
} Third__condact_f_params_31__out;

void Third__condact_f_params_31__reset(Third__condact_f_params_31__mem* self);

void Third__condact_f_params_31__step(int c, int y,
                                      Third__condact_f_params_31__out* _out,
                                      Third__condact_f_params_31__mem* self);

typedef struct Third__condact_gnc_params_99__mem {
  int v_3;
  Third__gnc_mem gnc;
} Third__condact_gnc_params_99__mem;

typedef struct Third__condact_gnc_params_99__out {
  int x;
} Third__condact_gnc_params_99__out;

void Third__condact_gnc_params_99__reset(Third__condact_gnc_params_99__mem* self);

void Third__condact_gnc_params_99__step(int c, int y,
                                        Third__condact_gnc_params_99__out* _out,
                                        Third__condact_gnc_params_99__mem* self);

typedef struct Third__condact_thermal_mem {
  Third__thermal_mem thermal;
} Third__condact_thermal_mem;

typedef struct Third__condact_thermal_out {
} Third__condact_thermal_out;

void Third__condact_thermal_reset(Third__condact_thermal_mem* self);

void Third__condact_thermal_step(int c, Third__condact_thermal_out* _out,
                                 Third__condact_thermal_mem* self);

typedef struct Third__main_mem {
  int v_5;
  int mif_cnt;
  Third__condact_thermal_mem condact_thermal;
  Third__condact_gnc_params_99__mem condact_gnc;
  Third__condact_f_params_31__mem condact_f;
} Third__main_mem;

typedef struct Third__main_out {
} Third__main_out;

void Third__main_reset(Third__main_mem* self);

void Third__main_step(Third__main_out* _out, Third__main_mem* self);

typedef struct Third__rcounter_mem {
  int v_6;
} Third__rcounter_mem;

typedef struct Third__rcounter_out {
  int cnt;
} Third__rcounter_out;

void Third__rcounter_reset(Third__rcounter_mem* self);

void Third__rcounter_step(int rst, Third__rcounter_out* _out,
                          Third__rcounter_mem* self);

#endif // THIRD_H
