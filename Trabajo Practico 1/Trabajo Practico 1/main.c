#include <stdio.h>
#include <stdlib.h>
#include "bibliotecatp.h"


int main()
{
 int Opcion ;
 char seguir = 's';
 int flag = 0;
 int flag2 = 0;
 float primerNum;
 float segundoNum;
 float resultado;
  do
    {
     Opcion = Menuopciones(" 1.Ingresar 1er Operando\n 2.Ingresar 2do Operando\n 3.Calcular todas las Operaciones\n 4.Informar Resultados\n 5.Salir\n Elija una opcion:");

     switch(Opcion)
      {
        case 1:
        primerNum = primerOperando();
        flag=1;
        break;

        case 2:
        segundoNum = segundoOperando();
        flag = 1;
        break;

        case 3:
        if (flag==1)
        {
            system("cls");
            printf("\n Realizando las operaciones....");
            printf("\n A) Suma entre: %.2f  (x) y %.2f (y) ",primerNum,segundoNum);
            printf("\n B) Resta entre: %.2f (x) y %.2f (y)",primerNum,segundoNum);
            printf("\n C) Multiplicacion entre: %.2f (x) y  %.2f (y)",primerNum,segundoNum);
            printf("\n D) El Factorial de : %.2f (x) y   %.2f  (y) \n",resultado);
            flag2=1;
        }else{
               system("cls");
               printf("\n ERROR! Primero debe ingresar los dos operadores (x) e (y)");
             }
        break;

        case 4:
        if (flag2==1)
        {
            system("cls");
            resultado= suma (primerNum , segundoNum);
            resultado= resta (primerNum , segundoNum);
            resultado= multiplicacion (primerNum , segundoNum);
            resultado= division (primerNum , segundoNum);
            funfactorial(resultado);
        } else
        {
            system("cls");
            printf("\n ERROR! Primero debe ingresar la  opcion 3");
        }
        break;

        case 5:
        seguir = 'n';
        break;


        default:
        printf("\n Opcion Incorrecta  (Intente ingresar una de las 5 disponibles..) \n");
        break;
      }

    system("pause");
    system("cls");

    }while(seguir=='s');
   printf("----------------------------------------------------------------------------");
   printf("\n*******GRACIAS POR UTILIZAR LA CALCULADORA DE SEBASTIAN ELIANO********\n");
   printf("-----------------------------------------------------------------------------");

    return 0;
}
