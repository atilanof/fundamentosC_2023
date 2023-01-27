/*
 * Clase: 27/01/2023
 * Funciones
 * */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define ADIVINAR 15


int main(int argc, char **argv)
{
    //Declaración de variables
	/*char caracter1;
    char caracter2;*/
    
    //Leer variables
    /*printf("\nIntroduczca el caracter 1: ");
    scanf("%c",&caracter1);
    fflush(stdin);
    printf("\nIntroduczca el caracter 2: ");
    scanf("%c",&caracter2);
    
    printf("\nEl valor 1 es: %c",caracter1);
    printf("\nEl valor 2 es: %c\n",caracter2);*/
    /*
    int i; //Variable iterador
    int num; //Variable que me de la cota máxima
    int aux; //Variable para guardar el número que me introzca el usuario
    */
    * /*for (i=10;i>=1;i--) { //i++ => i=i+1
        printf("\nEl valor de i es %d",i);
    }*/
    
   /* printf("\n¿Hasta que numero quiere llegar?");
    scanf("%d",&num);
    //Iterar hasta num
    for (i=0;i<=num;i++) { //i++ => i=i+1
        printf("\nEl valor de i es %d",i);
    }*/
    /*
    printf("\n¿Que numero de intentros?");
    scanf("%d",&num);
    //Iterar hasta num
    for (i=0;i<num && aux!=ADIVINAR;i++) { //i++ => i=i+1
        printf("\nIntroduzca el numero a adivinar: ");
        scanf("%d",&aux);     
        if (aux!=ADIVINAR) {
            printf("\nLo sentimos, llevas %d intento(s)",i+1);
        }
    }
    if (aux!=ADIVINAR) {
        printf("\nHas perdido");
    }else {
        printf("\n¡¡HAS GANADO!!");
    }*/
    /*
    int i,j; //Iteradores

    for (i=0;i<5;i++) {
        for (j=0;j<i;j++) {
            printf("\nLa pareja de valores es (%d,%d)",i,j);
        }
    }
    */
    /*
    int aux;
    int num;
    int i;
    printf("\n¿Que numero de intentros?");
    scanf("%d",&num);
    aux=-1;    
    i=0;
    while (aux!=ADIVINAR && i<num) {
        printf("\nIntroduzca el numero a adivinar: ");
        scanf("%d",&aux);
         if (aux!=ADIVINAR) {
            printf("\nLo sentimos");
        }
        i++;
    }
    if (aux!=ADIVINAR) {
        printf("\nHas perdido");
    }else {
        printf("\n¡¡HAS GANADO!!");    
    }
    */
    
    
    //iterar hasta que introduzca el valor A
    /*
    char caracter;
    
    caracter='\0';
    while (caracter!='A') {
        
        caracter=getchar();//scanf("%c",&caracter);
        
    }*/
    
    int num;
    
    do{
        printf("\nIntroduzca el n%cmero [0,200] que desee la ra%cz cuadrada ",163,161);        
        scanf("%d",&num);
        if (num<0 || num>200) {
            printf("\nEl valor introducido no es correcto");
        }
    }while(num<0 || num>200);
        
    printf("\nEl numero es: %.2f",sqrt(num));
    printf("\n");
	return 0;
}
