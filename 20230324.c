/*
 * Clase  24/03/2023
 * Memoría dinámica
 * 
 */ 

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/*Prototipo de las funciones*/
void LeerVector (float *vector, int n);
float ProductoEscalar (float *v1, float *v2, int n);
void ProductoEscalar2 (float *v1, float *v2, int n,float *escalar);
void MostrarVector (float *v, int n);


int main(int argc, char **argv)
{
	//Variable puntero
   /*float *vp; 
    int dim;
    int i;
    
    printf("\nDimensión: ");
    scanf("%d",&dim);
    printf("\nEl tamaño del float es: %d",sizeof(float));
    //vp=(float *)calloc(dim,sizeof(float));
    vp=(float *)malloc(dim*sizeof(float));
    
    if (vp==NULL) {
        printf("\nError al asignar memoria");
    }else {
        //operar con mi vector
        //Rellenar el vector
        for (i=0;i<dim;i++) {
            printf("\nElemento %d: ",i);
            scanf("%f",&vp[i]); //&vp[i] == vp+i
        }
        //Muestro el vector
        printf("\n El vector es:");
        for (i=0;i<dim;i++) {
            printf("\n\tElemento %d: %f",i,vp[i]);            
        }
        
        free(vp);
    }*/
    
    
    //Declaración de variables
    float *vec1, *vec2; //Punteros a mis vectores
    int dim; //Dimensión de mi vector
    float escalar; //Almacenar el valor del escalar
    char opc;
    do {
        //Solicito la dimensión al usuario
        do {
            printf("\nIntroduzca la dimensión: ");
            scanf("%d",&dim);
            if (dim<=0){
                printf("La dim > 1");
            }
        }while(dim<=0);
        
        //Pido memoria
        //Dos formas
        //primero
        vec1=(float *)calloc(dim,sizeof(float));
        if (vec1==NULL) {
            printf("\nError");        
        }else {
            vec2=(float *)calloc(dim,sizeof(float));
            if (vec2==NULL) {
                printf("\nNo hay memoria para el segundo");
            }else {
                //Leo los vectores
                printf("\nIntrozca los datos del vector 1: ");
                LeerVector(vec1,dim);
                printf("\nIntrozca los datos del vector 2: ");
                LeerVector(vec2,dim);
                //Producto vectorial
                //escalar=ProductoEscalar(vec1,vec2,dim);
                ProductoEscalar2(vec1,vec2,dim,&escalar);
                //Muestro los vectores y el resultado
                printf("\nEl vector1 es: ");
                MostrarVector(vec1,dim);
                printf("\nEl vector2 es: ");
                MostrarVector(vec2,dim);
                printf("\nEl producto escalar es %.2f: ",escalar);
                
                free(vec2);
            }        
            free(vec1);
        }
        //Segunda forma
        /*vec1=(float *)calloc(dim,sizeof(float));
        vec2=(float *)calloc(dim,sizeof(float));
        if (vec1==NULL || vec2==NULL) {
            printf("\nError");
            if (vec1!=NULL) {
                free(vec1);
            if (vec2!=NULL) {
                free(vec2);
            }        
        }else {
            
            
            free(vec1);
            free(vec2);
        }*/
    printf("\nDesea usted continuar(S/N): ");
    fflush(stdin);
    opc=toupper(getchar());
    }while(opc=='S');
    
    
	return 0;
}


void LeerVector (float *vector, int n) {
    int i;
    for (i=0;i<n;i++) {
        printf("\n\tIntroduzca %d: ",i+1);
        scanf("%f",&vector[i]);
    }
}

float ProductoEscalar (float *v1, float *v2, int n) {
    float escalar;
    int i;
    //Inicializo la variable
    escalar=0;
    for (i=0;i<n;i++) {
        escalar+=v1[i]*v2[i];
    }
    
    return escalar;
}

void MostrarVector (float *v, int n) {
    int i;
    printf("\n\t[");
    for (i=0;i<n;i++) {
        printf("%.2f  ",v[i]);
        //printf("%.2f  ",*(v+i);
        
    }
    printf("]\n");
}

void ProductoEscalar2 (float *v1, float *v2, int n,float *escalar) {
    int i;
    //Inicializo la variable
    *escalar=0;
    for (i=0;i<n;i++) {
        *escalar+=v1[i]*v2[i];
    }
    return;
}