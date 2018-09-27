#include <stdio.h>
#include <stdlib.h>
#include "Bertello.h"


int main ()
{
    //variables

    float operando1=0;
    float operando2=0;
    float suma;
    float resta;
    float multiplicacion;
    float division;
    int factorial1;
    int factorial2;
    int bandera1=0;
    int bandera2=0;
    int opcion;

    do
    {
        system("pause");
        system("cls");
        printf(" \nMenu");
        printf("\n 1-Ingresar primer operando (A=%f).",operando1);
        printf("\n 2-Ingresar segundo operando (B=%f).",operando2);
        printf("\n 3-Calcular todas las operaciones:");
        printf("\n  a)Suma");
        printf("\n  b)Resta");
        printf("\n  c)Division");
        printf("\n  d)Multiplicacion");
        printf("\n  e)Factorial");
        printf("\n 4-Informar resultados.");
        printf("\n 5-Salir de la calculadora.");
        printf(" \n\n Elija una opcion: ");
        scanf ("%d", &opcion);

        switch(opcion)
        {
        case 1:
            bandera1=1;
            printf(" Ingrese primer numero: ");
            scanf ("%f", &operando1);

            break;
        case 2:
            bandera2=1;
            printf(" Ingrese segundo numero: ");
            scanf ("%f", &operando2);


            break;
        case 3:

            if (bandera1==1 && bandera2==1)
            {
                suma=funcionSuma(operando1,operando2);
                resta=funcionResta(operando1,operando2);
                division=funcionDivision (operando1, operando2);
                multiplicacion=funcionMultiplicacion (operando1, operando2);
                factorial1=(int) funcionFactorial1 (operando1);
                factorial2=(int) funcionFactorial2 (operando2);
                printf("\n -Calculando-\n");

            }
            else
            {
                printf ("\n Por favor vuelva al menu");
            }

            break;
        case 4:
            if (bandera1==1 && bandera2==1)
            {

                printf("\n El resultado de la suma es: %.2f",suma);
                printf ("\n El resultado de la resta es:%.2f", resta);

                if (operando2 ==0)
                {
                    printf("\n No es posible dividir por 0");
                }
                else
                {
                    printf ("\n El resultado de la division es:%.2f", division);
                }
                printf ("\n El resultado de la multiplicacion es:%.2f", multiplicacion);

                if (operando1<0)
                {
                    printf("\n No se puede factoriar un numero negativo ");
                }
                else
                {
                    printf ("\n El resultado del factoreo 1 es:%d", factorial1);
                }
                if (operando2<0)
                {
                    printf("\n No se puede factoriar un numero negativo ");
                }
                else
                {
                    printf ("\n El resultado del factoreo 2 es:%d", factorial2);
                }
            }//if
            else
            {
                printf("\n Por favor vuelva al menu e ingrese dos numeros");
            }

            break;
        case 5:
            printf("\n Salir");
            break;
        default:
            printf("Error. Ingrese un dato correcto");


        }// swicht


    }//fin del anidamiento
    while (opcion!=5);


    return 0;

}
