#include <stdio.h>

int main (){
    printf ("Hola mundo");

    int numero = 5, *pnumero;
    pnumero = &numero;

    printf("1) contenido del puntero: %d \n", *pnumero);
    printf("2) direccion de memoria almacenada por el puntero: %p\n",pnumero);
    printf("3) direccion de memoria de la variable 'numero': %p\n",&numero);
    printf("4) direccion de memoria de del puntero: %p\n",&numero);
    printf("5) Tamaño de memoria utilizado por la variable: %lu\n", sizeof(numero));
    
    return 0;
} 
