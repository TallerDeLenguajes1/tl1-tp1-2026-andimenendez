#include <stdio.h>


int cuadrado (int a){

    return a*a;
}

void cuadrado2(int a){
    printf("el cuadrado de %d es %d * %d = %d \n",a,a,a,a*a);
}

void mostrarDireccionYcontenido(int *x){
     printf("direccion de la variable: %p\n", *x);
     printf("contenido de la variable: %d\n",*x);
}

void invertir (int *a, int *b){
    int aux = *a;
    *a = *b;
    *b = aux;

}

void ordenar (int *a, int *b){
    if(*a > *b){
        invertir(a,b);
    }
}

int main (){
    int x = 2;
    int y = 3;
    int resultado = cuadrado(x);
    printf ("a) cuadrado de %d es: %d\n", x , resultado);

    printf("b) ");
    cuadrado2(x);
    printf("\n");
    
    printf("c) informacion de la variable x: \n");
    mostrarDireccionYcontenido(&x);

    printf("d) Antes de invertir: x = %d, y = %d\n", x, y);
    invertir(&x, &y);
    printf(" Después de invertir: x = %d, y = %d\n", x, y);

    printf("e) Antes de ordenar: x = %d, y = %d\n", x, y);
    ordenar(&x, &y);
    printf("   Después de ordenar: x = %d, y = %d\n", x, y);

    return 0;
}