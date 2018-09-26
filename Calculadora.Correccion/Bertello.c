#include <stdio.h>
#include <stdlib.h>
#include "Bertello.h"

//funciones
float funcionSuma(float operando1,float operando2)
{
    float suma;
    suma=operando1+operando2;
    return suma;
}
/**\brief Suma
*\param ingresan dos numeros
*\param se realiza la operacion suma
 * \return resultado de la operacion
 *
 */



float funcionResta (float operando1, float operando2)
{
    float resta;
    resta=operando1-operando2;
    return resta;
}
/**\brief Resta
*\param ingresan dos numeros
*\param se realiza la operacion resta
 * \return resultado de la operacion
 *
 */


float funcionDivision (float operando1, float operando2)//correjir
{
    float division;
    division=operando1/operando2;
    return division;
}
/**\brief Division
*\param ingresan dos numeros
*\param se realiza la operacion division
*\param mensaje para avisar que no se puede dividir por 0
*/

float funcionMultiplicacion(float operando1, float operando2)
{
    float multiplicacion;
    multiplicacion=operando1*operando2;
    return multiplicacion;
}
/**\brief Multimplicacion
*\param ingresan dos numeros
*\param se realiza la operacion multiplicacion
*/
int funcionFactorial1 (int operando1)
{
    int resultado1=1;
    int i;

    for (i=1; i<operando1; i++)
    {
        resultado1=resultado1*i;
    }
    return resultado1;

}


/**\brief Factorial
*\param ingresan los numeros de a uno
*\param se realiza la operacion factoreo
*\param se muestra mensaje de que no se puede factorear por menos de 0
*/

int funcionFactorial2 (int operando2)
{
    int resultado1=1;
    int i;

    for (i=1; i<operando2; i++)
    {
        resultado1=resultado1*i;

    }

    return resultado1;

}
/**\brief Factorial
*\param ingresan los numeros de a uno
*\param se realiza la operacion factoreo
*\param se muestra mensaje de que no se puede factorear por menos de 0
*/

