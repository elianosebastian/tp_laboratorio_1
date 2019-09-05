#include <stdio.h>
#include <stdlib.h>
#include "bibliotecatp.h"
int Menuopciones(char texto[])
{
     int Opcion;
     printf("%s",texto);
     scanf("%d",&Opcion);
     return Opcion;
}
float primerOperando()
{
    float x;
    printf("Ingresar 1er Operando : ");
    scanf("%f",&x);
    return x;
}

float segundoOperando()
{
    float y;
    printf("Ingresar 2do Operando : ");
    scanf("%f",&y);
    return y;
}

float suma (float num1 , float num2)
{
    float Resultado;
    Resultado = num1 + num2;
    printf("\n A) Resultado de la Suma %.2f ",Resultado);
    return Resultado;
}

float resta (float num1 , float num2)
{
    float Resultado;
    Resultado = num1 * num2;
    printf("\n B)Resultado de la Resta:%.2f ",Resultado);
    return Resultado;
}


float multiplicacion (float num1 , float num2)
{
    float Resultado;
    Resultado = num1 * num2;
    printf("\n C)Resultado de la multiplicacion : %.2f  ",Resultado);
    return Resultado;
}

float division( float num1 , float num2)
{
    float Resultado;

    if (num2!=0)
    {
        Resultado=num1/num2;
        printf("\n C)Resultado de la Division : %.2f  ",Resultado);
    }
    else
    {
        printf("\n MATH 3RR0R , no se puede dividir por 0");
    }
    return Resultado;
}

int funfactorial(int numero)
{
    int i;
    int Resultado;

    Resultado = 1;

    for(i = numero; i >= 1; i--)
    {
        Resultado *= i;
    }

    return Resultado;


}
