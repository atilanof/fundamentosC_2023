/*
 * Ficheros binarios 
 */
#include <stdio.h>
#include <string.h>

#define N 20
#define M 50

typedef struct{
    char nombre[N];
    char apellidos[M];
    int edad;    
}T_PERSONA;

void LimpiarCadena(char *);

int main(int argc, char **argv)
{
    FILE *pf;
    T_PERSONA per;
    T_PERSONA v[3];
    int ctrl;
    char nombre[N];
    int bandera;
    int maximo;
    int pos;
    int i;
    pf=fopen("fichero.dat","wb+");
    if (pf==NULL) {
        printf("\nError al abrir el fichero");
    }else {
        //cON VECTORES
        strcpy(v[0].nombre,"Luis");//¡¡¡MAL!!! per.nombre="Luis";
        strcpy(v[0].apellidos,"Garcia");
        v[0].edad=40;       
        //fwrite(&v[0],sizeof(T_PERSONA),1,pf);
        strcpy(v[1].nombre,"Cristina");//¡¡¡MAL!!! per.nombre="Luis";
        strcpy(v[1].apellidos,"Fernandez");
        v[1].edad=28;
        //fwrite(&v[1],sizeof(T_PERSONA),1,pf);
        strcpy(v[2].nombre,"Pedro");//¡¡¡MAL!!! per.nombre="Luis";
        strcpy(v[2].apellidos,"Sanchez");
        v[2].edad=55;
        //fwrite(&v[2],sizeof(T_PERSONA),1,pf);
        fwrite(v,sizeof(T_PERSONA),3,pf);
        //Grabo 3 personas
        /*strcpy(per.nombre,"Luis");//¡¡¡MAL!!! per.nombre="Luis";
        strcpy(per.apellidos,"Garcia");
        per.edad=40;       
        fwrite(&per,sizeof(T_PERSONA),1,pf);
        strcpy(per.nombre,"Cristina");//¡¡¡MAL!!! per.nombre="Luis";
        strcpy(per.apellidos,"Fernandez");
        per.edad=28;
        fwrite(&per,sizeof(T_PERSONA),1,pf);
        strcpy(per.nombre,"Pedro");//¡¡¡MAL!!! per.nombre="Luis";
        strcpy(per.apellidos,"Sanchez");
        per.edad=55;
        fwrite(&per,sizeof(T_PERSONA),1,pf);
        //Buscar el de mayor edad y voy actualizar su nombre
        /*fseek(pf,0,SEEK_SET); //rewind(pf);        
        i=0;
        do {
            ctrl=fread(&per,sizeof(T_PERSONA),1,pf);
            if (ctrl==1) {
                if (i== 0 || per.edad>maximo) {
                    maximo=per.edad;
                    pos=i;                    
                }
                i++;
            }
        }while(ctrl==1);
        printf("\nLa posicion del maximo es: %d y la edad maxima: %d",pos,maximo);
        fseek(pf,pos*sizeof(T_PERSONA),SEEK_SET);
        ctrl=fread(&per,sizeof(T_PERSONA),1,pf);
        if (ctrl==1) {
            strcpy(per.nombre,"Juan");
            fseek(pf,-1*sizeof(T_PERSONA),SEEK_CUR);//fseek(pf,pos*sizeof(T_PERSONA),SEEK_SET);
            fwrite(&per,sizeof(T_PERSONA),1,pf);
        }
        
        /*
        //Pido el nombre
        printf("\nIntroduzca el nombre: ");
        fgets(nombre, N,stdin);  
        LimpiarCadena(nombre);
        //Me voy al comienzo del fichero
        fseek(pf,0,SEEK_SET); //rewind(pf);
        bandera=0;
        do {
            ctrl=fread(&per,sizeof(T_PERSONA),1,pf);
            if (ctrl==1) {
                if (strcmp(nombre,per.nombre)==0) { 
                    printf("\nNombre: %s, apellido: %s, edad: %d\n",per.nombre,per.apellidos, per.edad); 
                    printf("\nIntroduzca una nueva edad: ");
                    scanf("%d",&per.edad);
                    printf("\nNombre: %s, apellido: %s, edad: %d\n",per.nombre,per.apellidos, per.edad); 
                    fseek(pf,-1*sizeof(T_PERSONA),SEEK_CUR);
                    fwrite(&per,sizeof(T_PERSONA),1,pf);
                    bandera=1;
                }
            }
        }while(ctrl==1 && bandera==0);
        //muestro modificado
        //Me voy al comienzo del fichero*/
        fseek(pf,0,SEEK_SET); //rewind(pf);
        //Versión vector lectura total
        ctrl=fread(v,sizeof(T_PERSONA),3,pf);
        if (ctrl==3) {
            for(i=0;i<ctrl;i++) {
                printf("\nNombre: %s, apellido: %s, edad: %d\n",v[i].nombre,v[i].apellidos, v[i].edad);                     
            }
        }
        //Versión vector uno a uno
        /*i=0;
        do {
            ctrl=fread(&per,sizeof(T_PERSONA),1,pf);
            if (ctrl==1) {  
                v[i]=per;
                printf("\nNombre: %s, apellido: %s, edad: %d\n",v[i].nombre,v[i].apellidos, v[i].edad);                     
            }
            i++;
            
        }while(ctrl==1);*/
        /*do {
            ctrl=fread(&per,sizeof(T_PERSONA),1,pf);
            if (ctrl==1) {               
                printf("\nNombre: %s, apellido: %s, edad: %d\n",per.nombre,per.apellidos, per.edad);                     
            }
            
        }while(ctrl==1);*/
        
        
        if (fclose(pf)!=0) {
            printf("\nError al cerrar el fichero");
        }
    }
    /*int ctrl;
    pf=fopen("fichero.dat","rb");
    if (pf==NULL) {
        printf("\nError al abrir el fichero");
    }else {
        //Leo el fichero  
        ctrl=fread(&per,sizeof(T_PERSONA),1,pf);
        if (ctrl==1) {
            printf("\nNombre: %s, apellido: %s, edad: %d",per.nombre,per.apellidos, per.edad);
        }
        
        if (fclose(pf)!=0) {
            printf("\nError al cerrar el fichero");
        }
    }*/

	return 0;
}


void LimpiarCadena(char *cadena) {
    if (cadena[strlen(cadena)-1]=='\n') {
        cadena[strlen(cadena)-1]='\0';
    }
}