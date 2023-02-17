#include <stdio.h>
#define N 7

//Prototipo
int SumaDiagonal (int matriz[][N],int dim);
    


int main(int argc, char **argv)
{
	int matriz[N][N]; //Definición de la matriz
    int i,j; //Iteradores
    int res;
    
    for (i=0;i<N;i++) {
        for (j=0;j<N;j++) {
            printf("\nIntroduzca le valor (%d,%d): ",i,j);
            scanf("%d",&matriz[i][j]);  
        }
    }
    
    //LLamo a la función
    res=SumaDiagonal(matriz,N);
    
    printf("\nEl reusltado de la diagonal es: %d",res);
    
    
    
	return 0;
}

int SumaDiagonal (int matriz[][N],int dim) {
    int i;
    int resultado;
    
    resultado=0;//Acumulador lo he inicializado
    for (i=0;i<dim;i++) { //Bbucle
        resultado=resultado+matriz[i][i];
    }
    
    /*for (i=0;i<dim;i++) { //Bbucle
        for (j=0;j<dim;j++) { //Bbucle
            if (i==j) {
                resultado=resultado+matriz[i][j];
            }
        }
    }*/
    return resultado;
    
    
}