/*
 * PUNTEROS: CLASE DE TEORÍA
 * 17/03/2023
 */ 
#include <stdio.h>

void InterCutre(int a, int b);
void InterGuay(int *pa, int *pb);
void MultiplicaValor(int *pa, int x);
void Swap (float *pnum1, float *pnum2);

int main(int argc, char **argv)
{
	/*int a;
    int *pa;
    
    a=4;
    pa=&a;
    
    printf("\nEl valor de a es %d",a);
    printf("\nLa dirección a es %x y %x",&a,pa);
    printf("\nLa dirección de pa es %x, almacena %x y su contenido es: %d",&pa,pa,*pa);
    
    //Modificar la variable a de dos formas
    *pa=5;
    printf("\nEl valor de a es %d",a);*/
    
    
    //Diferencias de intercambio
   /*int a=4;
    int b=5;
    printf("\nEn el main a: %d y b: %d\n",a,b);
    //InterCutre(a,b);
    InterGuay(&a,&b);
    printf("\nEn el main a: %d y b: %d\n",a,b);*/
    
    /*int v[5]= {1,4,7,8,9};
    int i;
    int *pv;
    for (i=0,pv=&v[0];i<5;i++) {
        printf("\nEl valor es: %d",*(pv+i));
    }
    printf("\n");*/
    /*int v[5]= {1,4,7,8,9};
    MultiplicaValor(&v[2],3);
    printf("El tercer valor: %d",v[2]);
    */
    float num1;
    float num2;
    
    //pedis por teclado
    num1=3.2;
    num2=4.5;
    
    printf("\nEstoy en main");
    printf("\nDireccion de memoria de num1: %x",&num1);
    printf("\nContenido de num1: %f",num1);
    printf("\nDireccion de memoria de num2: %x",&num2);
    printf("\nContenido de num2: %f",num2);    
    
    //Lamada a la función
    Swap(&num1,&num2);
    
    printf("\nContenido de num1: %f",num1);
    printf("\nContenido de num2: %f",num2);    
    
    
    
    
	return 0;
}


void InterCutre(int a, int b) {
    int x;
    x=a;
    a=b;
    b=x;
    printf("\nEn la funcion a: %d y b: %d\n",a,b);
}

void InterGuay(int *pa, int *pb) {
    int x;
    x=*pa;
    *pa=*pb;
    *pb=x;
}

void MultiplicaValor(int *pa, int x) {
    (*pa)=(*pa)*x;
}

void Swap (float *p_num1, float *p_num2) {
    float x;
    printf("\nEstoy en main");
    printf("\nDireccion de p_num1: %x",&p_num1);
    printf("\nContenido de p_num1: %x",p_num1);
    printf("\nContenido de la direccion a la que apunta p_num1: %f",*p_num1);
    
    printf("\nDireccion de p_num2: %x",&p_num2);
    printf("\nContenido de p_num2: %x",p_num2);
    printf("\nContenido de la direccion a la que apunta p_num2: %f",*p_num2);
    //Hacemos el Swap
    x=*p_num1;
    *p_num1=*p_num2;
    *p_num2=x;
}