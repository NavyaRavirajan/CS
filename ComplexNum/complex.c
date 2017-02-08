
#include "complex.h"



struct complex add(struct complex n1,struct complex n2)
{
      struct complex temp;

      temp.real = n1.real + n2.real;
      temp.imag = n1.imag + n2.imag;

      return(temp);
}



