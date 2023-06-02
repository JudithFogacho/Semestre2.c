#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include "funciones.h"
float IngresevalorX(){
    float x;
    printf("Ingrese el valor de X: ");
    scanf("%f", &x);
    return x;
}

float IngresevalorY(){
    float y;
    printf("Ingrese el valor de Y: ");
    scanf("%f", &y);
    return y;
}

float IngresevalorZ(){
    float z;
    printf("Ingrese el valor de Z: ");
    scanf("%f", &z);
    return z;
}

float IngresevalorIgualdad(){
    float igualdad;
    printf("Ingrese el valor de igualdad: ");
    scanf("%f", &igualdad);
    return igualdad;
}
float calcularDetA (float M_A[3][3]){
    float C1= (1)*((M_A[1] [1]*M_A[2] [2])-(M_A[2] [1]*M_A[1] [2]));
    float C2= (-1)*((M_A[0] [1]*M_A[2] [2])-(M_A[2] [1]*M_A[0] [2]));
    float C3= (1)*((M_A[0] [1]*M_A[1] [2])-(M_A[1] [1]*M_A[0] [2]));
    float Det_A = ((M_A[0][0]*C1)+(M_A[1][0]*C2)+(M_A[2][0]*C3));
    return Det_A;
}
void resultado (float M_A [3][3], float M_B [3][1], float Det_A){
    float C4=(1)*((M_A[1] [1]*M_A[2] [2])-(M_A[2] [1]*M_A[1] [2]));
    float C5=(-1)*((M_A[0] [1]*M_A[2] [2])-(M_A[2] [1]*M_A[0] [2]));
    float C6=(1)*((M_A[0] [1]*M_A[1] [2])-(M_A[1] [1]*M_A[0] [2]));
    float detx= (M_B[0] [0]*C4)+ (M_B[1] [0]*C5)+(M_B[2] [0]*C6);
    float x= detx/Det_A;
    printf("x= %.2f\n",x);
    float C7=(1)*((M_B[1] [0]*M_A[2] [2])-(M_B[2] [0]*M_A[1] [2]));
    float C8=(-1)*((M_B[0] [0]*M_A[2] [2])-(M_B[2] [0]*M_A[0] [2]));
    float C9=(1)*((M_B[0] [0]*M_A[1] [2])-(M_B[1] [0]*M_A[0] [2]));
    float dety= (M_A[0] [0]*C7)+ (M_A[1] [0]*C8)+(M_A[2] [0]*C9);
    float y= dety/Det_A;
    
    printf("y= %.2f\n",y);
    
    float C10=(1)*((M_A[1] [1]*M_B[2] [0])-(M_A[2] [1]*M_B[1] [0]));
    float C11=(-1)*((M_A[0] [1]*M_B[2] [0])-(M_A[2] [1]*M_B[0] [0]));
    float C12=(1)*((M_A[0] [1]*M_B[1] [0])-(M_A[1] [1]*M_B[0] [0]));
    float detz= (M_A[0] [0]*C10)+ (M_A[1] [0]*C11)+(M_A[2] [0]*C12);
    float z= detz/Det_A;
    printf("z= %.2f\n",z);
}