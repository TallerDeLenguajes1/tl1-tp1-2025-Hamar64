#include <stdio.h>

int main(){

    int num = 2;
    int * p = &num;
    printf("Contenido del puntero: %d\n", *p);
    printf("Dirección almacenada por el puntero: %p\n", p);
    printf("Dirección de memoria de la variable: %p\n", &num);
    printf("Dirección de memoria del puntero: %p\n", &p);
    printf("Tamaño de la variable: %d bytes\n", sizeof(num));

    return 0;
}