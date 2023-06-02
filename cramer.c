#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "funciones.h"

int main()
{
    float M_A [3] [3];
    float M_B [3] [1];
    M_A [0][0]= IngresevalorX();
    M_A [0][1]= IngresevalorY();
    M_A [0][2]= IngresevalorZ();
    M_B [0][0]= IngresevalorIgualdad();
    M_A [1][0]= IngresevalorX();
    M_A [1][1]= IngresevalorY();
    M_A [1][2]= IngresevalorZ();
    M_B [1][0]= IngresevalorIgualdad();
    M_A [2][0]= IngresevalorX();
    M_A [2][1]= IngresevalorY();
    M_A [2][2]= IngresevalorZ();
    M_B [2][0]= IngresevalorIgualdad();

    float Det_A=calcularDetA(M_A);
    resultado(M_A,M_B,Det_A);
    return 0;
}

