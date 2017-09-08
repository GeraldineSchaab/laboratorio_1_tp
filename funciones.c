#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
float sumar(float n1,float n2)
{
    float resultado;
    resultado = n1+n2;
    return resultado;
}

float restar(float n1, float n2)
{

   float resultado;
   resultado = n1-n2;
   return resultado;

}
float dividir(float n1,float n2)
{
    float resultado;
    resultado = n1/n2;
    return resultado;
}

float multiplicar(float n1,float n2)
{
    float resultado;
    resultado = n1*n2;
    return resultado;
}
float factorial(float n1)
{
    if(n1>0)
    {
        float resultado=1;
        float aux;

        for(aux=1;aux>0;aux--)
        {
            resultado = resultado*aux;
        }
            return resultado;
    }
    else
    {
        return 0;
    }

    }


