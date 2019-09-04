#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main()
{
    char seguir = 's';
    int opcion;
    int numeroUno = 0;
    int numeroDos = 0;
    int resultado1;
    int resultado2;
    int resultado4;
    long int resultado5;
    while(seguir =='s')
    {
        printf("1- Ingresar 1er operando (A=%d)\n", numeroUno);
        printf("2- Ingresar 2do operando (B=%d)\n", numeroDos);
        printf("3- Calcular la suma (A+B)\n");
        printf("4- Calcular la resta (A-B)\n");
        printf("5- Calcular la division (A/B)\n");
        printf("6- Calcular la multiplicacion (A*B)\n");
        printf("7- Calcular el factorial (A!)\n");
        printf("8- Calcular todas las operaciones\n");
        printf("9- Salir\n");
        scanf("%d",&opcion);

        switch(opcion)
        {
            case 1:
                printf("Ingrese el 1er operando: ");
                scanf("%d",&numeroUno);
                break;
            case 2:
                printf("Ingrese el 2do operando: ");
                scanf("%d",&numeroDos);
                break;
            case 3:
                resultado1 = suma(numeroUno,numeroDos);
                printf("La suma es : %d \n", resultado1);
                break;
            case 4:
                resultado2 = resta(numeroUno,numeroDos);
                printf("La resta es: %d \n", resultado2);
                break;
            case 5:
                division(numeroUno,numeroDos);

                break;
            case 6:
                resultado4 = multiplicacion(numeroUno,numeroDos);
                printf("La multiplicacion es: %d \n", resultado4);
                break;
            case 7:
                resultado5 = factorial(numeroUno);
                printf("El factorial es: %d \n", resultado5);
                break;
            case 8:
                resultado1 = suma(numeroUno, numeroDos);
                resultado2 = resta(numeroUno, numeroDos);
                resultado4 = multiplicacion(numeroUno, numeroDos);
                resultado5 = factorial(numeroUno);
                printf("La suma es : %d \n", resultado1);
                printf("La resta es: %d \n",resultado2);
                division(numeroUno, numeroDos);
                printf("La multiplicacion es: %d \n",resultado4);
                printf("El factorial es: %d \n",resultado5);
                break;
            case 9:
                seguir = 'n';
                break;
        }
        system("pause");
        system("cls");
   }
  return 0;
}
