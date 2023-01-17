#include <stdio.h>

int main(int argc, char **argv)
{
    //1.-Declaración de variable 
    float peso; //almacena peso
    float altura; //almacena altura
    //float peso,altura;
    int edad; //almacena edad
    float imc; //Almacenar el indice de masa corporal
    
    //2.- Solicitud de información
	printf("Introduzca tu edad: ");
    scanf("%d",&edad);
    printf("Introduzca tu peso: ");
    scanf("%f",&peso);
    printf("Introduzca tu altura en metros: ");
    scanf("%f",&altura);
    
    //3.- Lógica funcional
    imc=peso/(altura*altura);
    
    //4.- Imprimir resultados
    printf("La edad es: %d\n",edad);
    printf("\nCon el peso: %5.2f y altura: %.4f, el imc es: %6.4f",peso,altura,imc);
      
	return 0;
}
