/* --- Generated the 25/4/2025 at 12:39 --- */
/* --- heptagon compiler, version 1.05.00 (compiled thu. mar. 27 11:52:18 CET 2025) --- */
/* --- Command line: /home/lufygo/.opam/heptagon/bin/heptc -target c third.ept --- */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "third.h"

void Third__fast_reset(Third__fast_mem* self) {
  self->idx = 0;
}

void Third__fast_step(int y, Third__fast_out* _out, Third__fast_mem* self) {
  Extern__print_fast_out Extern__print_fast_out_st;
  
  int v_1;
  int v;
  v_1 = (2*y);
  _out->x = (v_1+self->idx);
  Extern__print_fast_step(self->idx, y, _out->x, &Extern__print_fast_out_st);
  v = (self->idx+1);
  self->idx = v;;
}

void Third__gnc_reset(Third__gnc_mem* self) {
  self->idx = 0;
}

void Third__gnc_step(int y, Third__gnc_out* _out, Third__gnc_mem* self) {
  Extern__print_gnc_out Extern__print_gnc_out_st;
  
  int v;
  _out->x = (y-self->idx);
  Extern__print_gnc_step(self->idx, y, _out->x, &Extern__print_gnc_out_st);
  v = (self->idx+1);
  self->idx = v;;
}

void Third__thermal_reset(Third__thermal_mem* self) {
  self->idx = 0;
}

void Third__thermal_step(Third__thermal_out* _out, Third__thermal_mem* self) {
  Extern__print_thermal_out Extern__print_thermal_out_st;
  
  int v;
  Extern__print_thermal_step(self->idx, &Extern__print_thermal_out_st);
  v = (self->idx+1);
  self->idx = v;;
}

void Third__condact_f_params_31__reset(Third__condact_f_params_31__mem* self) {
  Third__fast_reset(&self->fast);
  self->v_2 = 31;
}

void Third__condact_f_params_31__step(int c, int y,
                                      Third__condact_f_params_31__out* _out,
                                      Third__condact_f_params_31__mem* self) {
  Third__fast_out Third__fast_out_st;
  
  int v;
  if (c) {
    Third__fast_step(y, &Third__fast_out_st, &self->fast);
    v = Third__fast_out_st.x;
    _out->x = v;
  } else {
    _out->x = self->v_2;
  };
  self->v_2 = _out->x;;
}

void Third__condact_gnc_params_99__reset(Third__condact_gnc_params_99__mem* self) {
  Third__gnc_reset(&self->gnc);
  self->v_3 = 99;
}

void Third__condact_gnc_params_99__step(int c, int y,
                                        Third__condact_gnc_params_99__out* _out,
                                        Third__condact_gnc_params_99__mem* self) {
  Third__gnc_out Third__gnc_out_st;
  
  int v;
  if (c) {
    Third__gnc_step(y, &Third__gnc_out_st, &self->gnc);
    v = Third__gnc_out_st.x;
    _out->x = v;
  } else {
    _out->x = self->v_3;
  };
  self->v_3 = _out->x;;
}

void Third__condact_thermal_reset(Third__condact_thermal_mem* self) {
  Third__thermal_reset(&self->thermal);
}

void Third__condact_thermal_step(int c, Third__condact_thermal_out* _out,
                                 Third__condact_thermal_mem* self) {
  Third__thermal_out Third__thermal_out_st;
  Third__thermal_step(&Third__thermal_out_st, &self->thermal);
}

void Third__main_reset(Third__main_mem* self) {
  Third__condact_f_params_31__reset(&self->condact_f);
  Third__condact_gnc_params_99__reset(&self->condact_gnc);
  Third__condact_thermal_reset(&self->condact_thermal);
  self->v_5 = 99;
  self->mif_cnt = 0;
}

void Third__main_step(Third__main_out* _out, Third__main_mem* self) {
  Third__condact_gnc_params_99__out Third__condact_gnc_params_99__out_st;
  Third__condact_thermal_out Third__condact_thermal_out_st;
  Third__condact_f_params_31__out Third__condact_f_params_31__out_st;
  
  int v_4;
  int v;
  int x;
  int y;
  int clk_f;
  int clk_gnc;
  int clk_thermal;
  clk_gnc = (self->mif_cnt==9);
  clk_thermal = (self->mif_cnt==0);
  clk_f = true;
  Third__condact_f_params_31__step(clk_f, self->v_5,
                                   &Third__condact_f_params_31__out_st,
                                   &self->condact_f);
  y = Third__condact_f_params_31__out_st.x;
  Third__condact_gnc_params_99__step(clk_gnc, y,
                                     &Third__condact_gnc_params_99__out_st,
                                     &self->condact_gnc);
  x = Third__condact_gnc_params_99__out_st.x;
  v = (self->mif_cnt+1);
  v_4 = (v%10);
  if (clk_thermal) {
    Third__condact_thermal_step(true, &Third__condact_thermal_out_st,
                                &self->condact_thermal);
  };
  self->v_5 = x;
  self->mif_cnt = v_4;;
}

void Third__rcounter_reset(Third__rcounter_mem* self) {
  self->v_6 = 0;
}

void Third__rcounter_step(int rst, Third__rcounter_out* _out,
                          Third__rcounter_mem* self) {
  
  int v;
  if (rst) {
    _out->cnt = 0;
  } else {
    _out->cnt = self->v_6;
  };
  v = (_out->cnt+1);
  self->v_6 = v;;
}

