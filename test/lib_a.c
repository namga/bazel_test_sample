#include "lib_a.h"

int lib_a_function(void)
{
   int retval;
   
   retval = lib_x_function();

   if (retval != -1)
      return 0;
   
   return -1;
}