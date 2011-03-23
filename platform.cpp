
#include "platform.h"

#include <stdio.h>

void testRDTSC ( void )
{
  int64_t temp = rdtsc();

  printf("%d",(int)temp);
}

#if defined(_MSC_VER)

#include <windows.h>

void SetAffinity ( int cpu )
{
  SetProcessAffinityMask(GetCurrentProcess(),cpu);
}

#else

void SetAffinity ( int cpu )
{
}

#endif

