#include <stdio.h>

int main(int argc, char **argv)
{
	/*int num;
    int unidades;
    int decenas;
    int centenas;
    //Defino el número
    num=542;
    //Obtengo la unidad
    unidades=num%10;
    num=num/10;
    //Obtengo la decena
    decenas=num%10;
    num=num/10;
    //Obtengo la centenas
    centenas=num%10;
    num=num/10;
    
    //Imprimo el resultado
    printf("Las unidades: %d, decenas: %d, centenas: %d\n",unidades,decenas,centenas);
	*/
    

    //Declaración de variables
    /*int edad;
    
    //Solicitar información al usuario
    printf("Por favor, introduzca su edad: ");
    scanf("%d",&edad);
    
    if(edad>=0 && edad<18) {
        printf("\nEres un pringado");
    }else if(edad>=18 && edad<35){
        printf("\nMayor de edad");
    }else if(edad>=35) {
        printf("\nEres un viejo");
    }else {
        printf("\nEdad es erronea");
    }*/
    
    //Declaración de variables
    /*double x;
    double resultado;
    //Solicito datos al usuairo
    printf("\nIntroduzca el valor de x: ");
    scanf("%lf",&x);
    //Logica
    if (x<2) {
        resultado=x*x*x+5.5;
    }else {
        resultado=1+1/(3*x);
    }
    //Impriimo resultada
    printf("\nEl resultado der f(x): %06.3f\n",resultado);*/
    /*
    int peso;
    
    printf("\nDigame su peso: ");
    scanf("%d",&peso);
    
    if (!(peso<40 )){
        printf("\nTienes que comer más\n");
    }
    */
    
    char opcion;
    
    printf("\nIntroduzca un caracter: ");
    scanf("%c",&opcion);
    
    switch(opcion){
        case 'a':
            printf("\nHa introducido una a\n");
            break;
        case 'b':
            printf("\nHa introducido una b\n");
            break;
        default:
            printf("\nMe ha introducido un valor distinto a y b\n");
            break;
    }
    
     return 0;
}
