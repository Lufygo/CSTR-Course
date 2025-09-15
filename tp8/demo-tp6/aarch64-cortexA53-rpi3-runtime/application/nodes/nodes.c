#include <librpi3/stdio.h>
#include <librpi3/svc.h>
#include <nodes.h>

void f_step(int z, int *y)
{
  char buf[128] ;
  uint32_t cpuid = get_cpuid() ;
  *y = z + 3;
  snprintf(buf,127,"Core%d: f(z=%d)->(y=%d)\n",cpuid,z, *y);
  console_puts(get_cpuid(),buf) ;
}

void g_step(int y, int u, int *z_1)
{
  char buf[128] ;
  uint32_t cpuid = get_cpuid() ;
  *z_1 = 2 * y + u;
  snprintf(buf,127,"Core%d: g(y=%d, u=%d)->(z_1=%d)\n",cpuid,y, u, *z_1,) ;
  console_puts(get_cpuid(),buf) ;
}

void h_step(int y, int *x)
{
  char buf[128] ;
  uint32_t cpuid = get_cpuid() ;
  *x = y + 6;
  snprintf(buf,127,"Core%d: h(y=%d)->(x=%d)\n",cpuid,y,*x) ;
  console_puts(get_cpuid(),buf) ;
}

void m_step(int x, int* u_1)
{
  char buf[128] ;
  uint32_t cpuid = get_cpuid() ;
  *u_1 = x / 2 ;
  snprintf(buf,127,"Core%d: m(x=%d)->(u_1=%d)\n",cpuid,x,*u_1) ;
  console_puts(get_cpuid(),buf) ;
}
