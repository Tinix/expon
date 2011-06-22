/* Santiago Rios Mayo - Daniel Tinivella */

#include <stdio.h>
#include "complejo.h"

/* Creamos los complejos*/
compl
compl_create(const real rl , const real img ) {
	compl create;   /*res es el resultado*/
	create.rl = rl;
	create.img = img;
	return create;
}

real compl_preal(compl c){
/* DESC: Devuelve la parte real. */
real r;
r = c.rl;
return r;
}

real compl_pimag(compl c){
/* DESC: Devuelve la parte imaginaria. */
real im;
im = c.img;
return im;
}


/*Definicion de la funcion  Suma de Complejos */
compl
compl_suma(const compl a, const compl b){
	compl suma;
	suma.rl = a.rl + b.rl;
	suma.img = a.img + b.img;

	return suma; 
}

/*Definicion de la funcion resta de complejos */

compl
compl_resta(const compl a, const compl b){
	compl rest;
	rest.rl = a.rl - b.rl;
	rest.img = a.img - b.img;
	
	return rest;
}

compl
compl_prod(const compl a, const compl b){
	compl mul;
	mul.rl = a.rl * b.rl - a.img * b.img;
	mul.img = a.rl * b.img + a.img + b.rl;

	return mul;
}
/* DESC: Imprime en pantalla c con formato a + i b. */
void compl_print(const compl c){
real a, b;

a = compl_preal(c);
b = compl_pimag(c); 
printf("El numero imaginario es:\t %LG + i * %LG.\n",a,b);

}

compl 
compl_leer(void){
/* DESC: Lee por teclado y construye.*/ 
real r,s;
compl c;

printf("Ingrese parte real:\t");
scanf("%LG",&r);
printf("Ingrese parte imaginaria:\t");
scanf("%LG",&s);

c = compl_create(r,s);
return (c);
}

