/*
 * Clase : 03/02/2023
 * Tema 6: Funciones
 * Grupo: G
 */ 
#include <stdio.h>

//prototipo de la función
/*Tres partes:
   * Tipo valor que devuelve (int, float, char, etc)   o void si no devuelve nada
   * Nombre de la función (mayúsculas)
   * Parámetros de la función (su tipo de dato)
*/

//prototipo
int Factorial(int); //Función que calcula el factorial 
//int Factorial (int num);
int Suma(int, int); //Función de dos números
char Menu();  //hacer el menu
int Reverso(int);


int main(int argc, char **argv)
{
    int num; //Número para calcular el factorial
    int res; //Almacenar el resultado factorial
    char opc; //opcion del menu
    int sum1,sum2; //Sumandos
    int reverso; //Reverso de la fuerza
    do {
        opc=Menu();
        switch(opc){
            case 'A':
            case 'a':
                 do {
                    printf("Introduzca un número: ");
                    scanf("%d",&num);
                    if (num<0) {
                        printf("\nEl factoiral de un número no puede ser negativo");
                    }
                }while (num<0);
                
                //Llamo a la función
                res=Factorial(num);
                
                //Imprimo resultado
                printf("\nEl valor del factorial de %d es %d\n",num,res);
                //printf("\nEl valor del factorial de %d es %d\n",num,Factorial(num));
                break;
            case 'B':
            case 'b':
                printf("\nIntroduzca el sumando 1: ");
                scanf("%d",&sum1);
                printf("\nIntroduzca el sumando 2: ");
                scanf("%d",&sum2);
                res=Suma(sum1,sum2);
                printf("\nLa suma es: %d",res);
                break;
            
            case 'C':
            case 'c':
                printf("\nIntroduzca el numero que me haga el reverso: ");
                scanf("%d",&reverso);
                printf("\nEl reverso del numero %d es %d",reverso,Reverso(reverso));
                break;    
            case 'D':
            case 'd':
                printf("\nGracias por utilizar software ICAI\n");
                break;    
            default:
                printf("\nError");
                break;
        }
    }while(opc!='D' && opc!='d');
   
    
	return 0;
}


int Factorial (int num) {
    int i; //iterador
    int resultado;
    
    resultado=1;
    for (i=num;i>1;i--){
            resultado=resultado*i;
    }
    //printf("\n%d",resultado);
    return resultado;   
    
}

int Suma(int sumando1, int sumando2) {
    return sumando1+sumando2;
}

char Menu() {
    char opcion;
    
    printf("\n===============");
    printf("\n     MENU");
    printf("\n===============");
    printf("\nA) Factorial");
    printf("\nB) Suma");
    printf("\nC) Reverso de un número");
    printf("\nD) Salir");
    printf("\nIntroduzca la opción que desee: ");
    fflush(stdin);
    scanf("%c",&opcion);
    
    return opcion; 
}

int Reverso(int num) {
    int resultado;
    
    resultado=0;
    while(num>0) {
        resultado=resultado*10+num%10;
        num=num/10;
    }
    
    return resultado;
    
    
    
    
}