/*
 * 31/03/2023
 * Estructuras
 * 
 */ 
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define M 50

typedef struct {
    int dia;
    int mes;
    int anyo;
}T_FECHA;

typedef struct {
    int curso;
    char nombre[M];
    int num_alumnos;
    T_FECHA fecha;
}T_ASIGNATURA;

T_ASIGNATURA CargaValorAsigntaura();
void CargaAsignatura (T_ASIGNATURA *);
void CargaAsignaturas (T_ASIGNATURA *,int);
void MostrarAsignaturas (T_ASIGNATURA *,int);
int main(int argc, char **argv)
{
	T_ASIGNATURA *asig;
    int num;
   // int i;
   /* asig.curso=1;
    //asig.nombre="Fundamentos";  MUY MAL
    strcpy(asig.nombre,"Fundamentos");
    asig.num_alumnos=45;*/
    
    //CargaAsignatura(&asig);
    
    //printf("\nLa asignatura del curso %d, se llama %s y tiene %d alumnos",asig.curso,asig.nombre,asig.num_alumnos);
    //Leo el numero de asignturas
    do {
        printf("\nIntroduzca el número de asignturaas: ");
        scanf("%d",&num);
        if (num<=0 ) {
            printf("\nError");
        }   
    }while(num<=0) ;
    
    asig=(T_ASIGNATURA *)calloc(num,sizeof(T_ASIGNATURA));
    if (asig==NULL) {
        printf("\nCaos no tengo memoria");
    }else {
        CargaAsignaturas(asig, num);
        MostrarAsignaturas(asig,num)    ;
      
        free(asig);
    }
            
	return 0;
}


void CargaAsignatura (T_ASIGNATURA *asignatura) {
    
    //(*asignatura).curso=1;
    /*asignatura->curso=1;
    strcpy(asignatura->nombre,"Fundamentos");
    asignatura->num_alumnos=45;*/
    printf("\nIntroduca el curso: ");
    scanf("%d", &asignatura->curso);
    printf("\nIntroduca el nombre: ");
    fflush(stdin);
    fgets(asignatura->nombre,M,stdin);
    printf("\nIntroduca el número: ");
    scanf("%d", &asignatura->num_alumnos);
    asignatura->fecha.dia=1;
    asignatura->fecha.mes=9;
    asignatura->fecha.anyo=12;
}

void CargaAsignaturas (T_ASIGNATURA *vasig,int num_asig) {
    int i;
    
    for (i=0;i<num_asig;i++) {
       vasig[i]=CargaValorAsigntaura();
        //CargaAsignatura(&vasig[i]);
    }
    
    
}

void MostrarAsignaturas (T_ASIGNATURA *asig,int num) {
    int i;
      for (i=0;i<num;i++) {
            printf("\nLa asigntura %d, es del curso %d, se llama %s y tiene %d alumnos",i,asig[i].curso,asig[i].nombre,asig[i].num_alumnos);
        }
    
}

T_ASIGNATURA CargaValorAsigntaura() {
    T_ASIGNATURA asig;
    printf("\nIntroduca el curso: ");
    scanf("%d", &asig.curso);
    printf("\nIntroduca el nombre: ");
    fflush(stdin);
    fgets(asig.nombre,M,stdin);
    printf("\nIntroduca el número: ");
    scanf("%d", &asig.num_alumnos);
    asig.fecha.dia=1;
    asig.fecha.mes=9;
    asig.fecha.mes=2022;
    
    
    
    return asig;
}