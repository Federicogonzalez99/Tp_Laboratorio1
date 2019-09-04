#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
int suma (int numeroUno, int numeroDos){
       int resultado;
       resultado = numeroUno + numeroDos;
       return resultado;
       }

int resta (int numeroUno, int numeroDos){
        int resultado;
        resultado = numeroUno - numeroDos;
        return resultado;
        }
void division (int numeroUno, int numeroDos){
        float resultado3;
          if (numeroDos == 0 || numeroUno == 0)
                {
                    printf("Error, no se puede dividir por 0\n");
            }
            if(numeroDos != 0 && numeroUno != 0)
            {
                resultado3 = (float) numeroUno / numeroDos;
                printf("La division es: %.2f \n", resultado3);
            }

}

int multiplicacion(int numeroUno, int numeroDos){

        int resultado;

        resultado = numeroUno * numeroDos;

        if (numeroUno == 0){
            resultado = 0;
        }
        if (numeroDos == 0){
            resultado = 0;
        }
        return resultado;
}
long int factorial(int numeroUno){

    long resultado;
    if(numeroUno == 0 || numeroUno == 1)
    {
        resultado = 1;
    }
    else
    {
        resultado = numeroUno * factorial(numeroUno -1);
    }
    return resultado;
}
