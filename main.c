#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
int main()
{
    char seguir='s';
    int opcion=0;
    float n1,n2,resultado;


    do
    {
        printf("1- Ingresar 1er operando (A=x)\n");
        printf("2- Ingresar 2do operando (B=y)\n");
        printf("3- Calcular la suma (A+B)\n");
        printf("4- Calcular la resta (A-B)\n");
        printf("5- Calcular la division (A/B)\n");
        printf("6- Calcular la multiplicacion (A*B)\n");
        printf("7- Calcular el factorial (A!)\n");
        printf("8- Calcular todas las operacione\n");
        printf("9- Salir\n");

        scanf("%d",&opcion);

        switch(opcion)
        {
            case 1:
                printf ("\nIngrese el primer numero\n");
                scanf("%f",&n1);
                break;
            case 2:
                printf ("\nIngrese el segundo numero\n");
                scanf("%f",&n2);
                break;
            case 3:
                resultado=sumar(n1,n2);
                printf("La suma de %f + %f = %f\n",n1,n2,resultado);
                break;
            case 4:
                resultado=restar(n1,n2);
                printf("La resta de %f - %f = %f\n", n1, n2, resultado);
                break;
            case 5:
                resultado=dividir(n1,n2);
                if(resultado != 0)
                {
                printf("La division de %f / %f = %f\n", n1, n2, resultado);
                }
                else
                {
                    printf("\nERROR. No se puede dividir por cero. Reingrese\n");
                }
                break;
            case 6:
                resultado=multiplicar(n1,n2);
                printf("La multiplicacion de %f x %f = %f\n", n1, n2,resultado);
                break;
            case 7:
                resultado=factorial (n1);
                if(n1 !=0)
                {
                printf("\nEl primer operando es: %f \nY su factorizacion es:%f\n", n1,resultado);

                }
                else
                {
                    printf("\nERROR. No existe factorial de numero negativo. REINGRESE\n");
                }

                break;
            case 8:

                printf ("\nIngrese el primer numero\n");
                scanf("%f",&n1);

                printf ("\nIngrese el segundo numero\n");
                scanf("%f",&n2);

                resultado=sumar(n1,n2);
                printf("La suma de %f + %f = %f\n",n1,n2,resultado);


                resultado=restar(n1,n2);
                printf("La resta de %f - %f = %f\n", n1, n2, resultado);


                resultado=dividir(n1,n2);
                if(resultado != 0)
                {
                printf("La division de %f / %f = %f\n", n1, n2, resultado);
                }
                else
                {
                    printf("\nERROR. No se puede dividir por cero. Reingrese\n");
                }


                resultado=multiplicar(n1,n2);
                printf("La multiplicacion de %f x %f = %f\n", n1, n2,resultado);

                resultado=factorial (n1);
                if(n1 !=0)
                {
                printf("\nEl primer operando es: %f \nY su factorizacion es:%f\n", n1,resultado);

                }
                else
                {
                    printf("\nERROR. No existe factorial de numero negativo. REINGRESE\n");
                }

            case 9:
                seguir = 'n';
                break;
        }
    }
    while(opcion ==1 || opcion == 2 || opcion == 3 || opcion == 4 || opcion == 5 || opcion == 6 || opcion == 7 || opcion == 8);

    return 0;
}

