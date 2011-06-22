#include <stdio.h>
#include "expo.h"



int main(void){


  compl x ,r;
  int y; 

  x = compl_leer();
  printf("ingrese el numero exponente:\t");
  scanf("%i", &y);
  r = expcompl(x , y);
  compl_print(r);
  
return 0;
}


