/*Tema de Ficheros
 * 
 */ 
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define N 25
#define M 50

typedef struct {
    char nombre[N];
    char apellidos[M];
    int edad;
}T_PERSONA;

//Prototipo de funciones
void LimpiarCadena(char *);
int ContarLineas(FILE *);
void CargaPersona(FILE *pf, T_PERSONA vec[]) ;
void MostrarPersonas(T_PERSONA [], int);

int main(int argc, char **argv)
{
	FILE *pf;
    T_PERSONA pe;
    T_PERSONA *v_per;
    int num_per;    
    //char opc;
    int ctrl;
    /*strcpy(pe.nombre,"Atilano");
    strcpy(pe.apellidos,"Fernánez-Pacheco");
    pe.edad=40;*/
    //Si se quiere poner una ruta sustituir \\¢arpeta1\\carpeta 2 por la ruta correspondiente
    //pf=fopen("c:\\carpeta1\\carpeta2\\fichero.txt","a+");
    pf=fopen("fichero.txt","a+");
    if (pf==NULL) {
        printf("\nNo se ha podido abrir el fichero.");
    }else {        
        /*do {
            printf("\nIntroduzca el nombre: ");
            fflush(stdin);
            fgets(pe.nombre,N,stdin);
            LimpiarCadena(pe.nombre);
            printf("\nIntroduzca el apellido: ");
            fflush(stdin);
            fgets(pe.apellidos,M,stdin);
            LimpiarCadena(pe.apellidos);
            printf("\nIntroduzca la edad: ");            
            scanf("%d",&pe.edad);
            fprintf(pf,"%s %s %d\n",pe.nombre,pe.apellidos,pe.edad);
            printf("Pulse S para salir otra tecla para continuar ");
            fflush(stdin); 
            scanf("%c",&opc);
        
        }while(opc!='S' && opc !='s');*/
        
        
        num_per=ContarLineas(pf);
        printf("\nEl numero de personas leidas es: %d",num_per);
        if (num_per>0) {
            v_per=(T_PERSONA *)calloc(num_per,sizeof(T_PERSONA));
            if (v_per==NULL) {
                printf("\nError");
            }else {
                CargaPersona(pf, v_per); 
                MostrarPersonas(v_per,num_per);
                free(v_per);
            }
        }
        rewind(pf);
        printf("\nEl contenido del fichero es: ");
        do{
            ctrl=fscanf(pf,"%s %s %d",pe.nombre,pe.apellidos,&pe.edad);
            if (ctrl==3) {
                printf("\nEl nombre es: %s, apellidos: %s, edad: %d",pe.nombre,pe.apellidos,pe.edad);
            }            
        }while(ctrl==3);
        
        //Cerramos el ficheor
        
        if(fclose(pf)!=0) {
            printf("El fichero no se ha cerrado correctamente");
        }
    }
    /*pf=fopen("fichero.txt","r");
    if (pf==NULL) {
        printf("\nNo se ha podido abrir el fichero.");
    }else { 
        printf("\nEl contenido del fichero es: ");
        do{
            ctrl=fscanf(pf,"%s %s %d",pe.nombre,pe.apellidos,&pe.edad);
            if (ctrl==3) {
                printf("\nEl nombre es: %s, apellidos: %s, edad: %d",pe.nombre,pe.apellidos,pe.edad);
            }            
        }while(ctrl==3);
        if(fclose(pf)!=0) {
            printf("El fichero no se ha cerrado correctamente");
        }
    }*/
	return 0;
}

void LimpiarCadena(char *cad) {
    if (cad[strlen(cad)-1]=='\n') {
        cad[strlen(cad)-1]='\0';
    }
}

int ContarLineas(FILE *pf) {
    int contador=0;
    int ctrl;
    T_PERSONA pe;
    if (pf!=NULL){
        rewind(pf);
        do{
                ctrl=fscanf(pf,"%s %s %d",pe.nombre,pe.apellidos,&pe.edad);
                if (ctrl==3) {
                    contador++;
                }            
        }while(ctrl==3);
    }
    return contador;
}

void CargaPersona(FILE *pf, T_PERSONA vec[]) {
    int contador=0;
    int ctrl;
    T_PERSONA pe;
    if (pf!=NULL){
        rewind(pf);
        do{
                ctrl=fscanf(pf,"%s %s %d",pe.nombre,pe.apellidos,&pe.edad);
                if (ctrl==3) {
                    vec[contador]=pe;
                    contador++;
                }            
        }while(ctrl==3);
    }
    
}

void MostrarPersonas(T_PERSONA v[], int dim) {
    int i;
    for(i=0;i<dim;i++) {
        printf("\nEl nombre es: %s, apellidos: %s, edad: %d",v[i].nombre,v[i].apellidos,v[i].edad);
    }
}
