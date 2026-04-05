#include <stdio.h>

int cuadrado1(int num){                 //Apartado a
    num = num * num;
    return num;
}

void cuadrado2(int *num){                //Apartado b
    *num = (*num)*(*num);
}

void direccion(int *var){                    //Apartado c
    printf("Dirección: %p\n", var);
    printf("Contenido: %d\n", *var);
}

void Invertir(int *a, int *b){
    int aux;
    aux = *a;
    *a = *b;
    *b = aux;
}

void orden(int *a, int *b){
    int aux;
    if (*a>*b){
        Invertir(a, b);
    }
}

int main(void){

    int a = 7, b = 8, a_cuadrado, b_cuadrado;
    int *pa = &a, *pb = &b, *pbc = &b_cuadrado;

    a_cuadrado = a;
    b_cuadrado = b;
    a_cuadrado = cuadrado1(a_cuadrado);
    cuadrado2(pbc);
    printf("Valor de a al cuadrado: %d\n", a_cuadrado);
    printf("Valor de b al cuadrado: %d\n", b_cuadrado);
    direccion(pa);
    direccion(pb);
    Invertir(pa, pb);
    printf("Valor de a al invertir: %d\n", a);
    printf("Valor de b al invertir: %d\n", b);
    orden(pa, pb);
    printf("Valor de a al ordenar: %d\n", a);
    printf("Valor de b al ordenar: %d\n", b);

    return 0;
}