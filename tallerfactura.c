#include <stdio.h>
int main(){
    float sub1=0, sub2=0, sub3=0, sub4=0, sub5=0;
    float precio1=150, precio2=55, precio3=180, precio4=70, precio5=120;
    float num1=0, num2=0, num3=0, num4=0, num5=0;
    float subtotal=0, total=0, descuento=0;
    int seguir, crearfact, impr;
    char opcion;
    char nombre[50], cedula[20];

    printf("             Menu de factura      \n");
    printf("#######################################\n");
    printf("1) Facturar producto\n");
    printf("2) Imprimir factura\n");
    printf("3) Salir\n"); 

    scanf("%d", &crearfact);
    switch (crearfact)
    {
    case 1:
        printf("Ingrese el nombre del cliente: \n");
        scanf("%s", &nombre);
        printf("Ingrese la cedula del cliente:\n");
        scanf("%s", &cedula);
        do
        {
            printf("a) Llantas                   (Precio: $150)\n");
            printf("b) Kit Pastillas de freno    (Precio: $55)\n");
            printf("c) Kit de embrague           (Precio: $180)\n");
            printf("d) Faro                      (Precio: $70)\n");
            printf("e) Radiador                  (Precio: $120)\n");
            scanf("%s", &opcion);

                switch (opcion)
                {
                case 'a':
                    printf("Ingrese el numero de llantas que desea facturar:\n");
                    scanf("%f", &num1);
                    break;
                case 'b':
                    printf("Ingrese el numero de Kit de emergencia que desea facturar:\n");
                    scanf("%f", &num2);
                    break;
                case 'c':
                    printf("Ingrese el numero de kit de embrague que desea facturar:\n");
                    scanf("%f", &num3);
                    break;
                case 'd':
                    printf("Ingrese el numero de faros que desea facturar:\n");
                    scanf("%f", &num4);
                    break;
                case 'e':
                    printf("Ingrese el numero de radiadores que desea facturar:\n");
                    scanf("%f", &num5);
                    break;
            
                default:
                    break;
                }
            printf("¿Desea facturar otro producto?    \nSi=1  No=0\n");
            scanf("%d", &seguir);
        } while (seguir == 1);
        if (seguir == 0){
            printf("             Menu de factura      \n");
            printf("#######################################\n");
            printf("1) Facturar producto\n");
            printf("2) Imprimir factura\n");
            printf("3) Salir\n");
            scanf("%d", &crearfact);
        }
    case 2:
        sub1=num1*precio1;
        sub2=num2*precio2;
        sub3=num3*precio3;
        sub4=num4*precio4;
        sub5=num5*precio5;


        subtotal= sub1+sub2+sub3+sub4+sub5;

        if (subtotal>501 && subtotal<=1000)
        {
            total=subtotal*0.96;
            descuento=4;
        }
        else if (subtotal>=1001 && subtotal<=5000)
        {
            total=subtotal*0.93;
            descuento=7;
        }
        else if (subtotal>5000)
        {
            total=subtotal*0.91;
            descuento=9;
        }
        printf("Imprimir factura: 1) Si    2) No \n");
        scanf("%d", &impr);

        if(impr == 1){
            printf("############################################################################## \n");
            printf("############################## FACTURA ###################################### \n");

            printf("Nombre: %s \n", nombre);
            printf("Cedula: %s \n", cedula);

            printf("\n    Producto           Cantidad            Precio Unitario             Precio Total\n");

            if(num1!=0){
                printf("\n Llantas             %.0f                   %.2f                       %.2f\n", num1, precio1, sub1);
            } 

            if(num2!=0){
                printf("\nKit emergencia       %.0f                   %.2f                       %.2f\n", num2, precio2, sub2);
            } 

            if(num3!=0){
                printf("\nKit embrague         %.0f                   %.2f                       %.2f\n", num3, precio3, sub3);
            } 

            if(num4!=0){
                printf("\n Faros               %.0f                   %.2f                        %.2f\n", num4, precio4, sub4);
            }   
            if(num5!=0){
                printf("\nRadiadores           %.0f                   %.2f                        %.2f\n", num5, precio5, sub5);
            } 

            printf("\nEl subtotal sin descuento es: %.2f\n", subtotal);
            printf("El descuento aplicado es de: %.0f \n", descuento);
            printf("\nEl total es: %.2f", total);
                break;
        }

    default:
        return 0;
        break;
    }
}