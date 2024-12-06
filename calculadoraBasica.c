#include <stdio.h>

int sumar(int a, int b);
int restar(int a, int b);
int multiplicar(int a, int b);

int main() {
    int opcion;
    int num1, num2, resultado;

    do {
        printf("\n=== Calculadora Basica ===\n");
        printf("1. Sumar\n");
        printf("2. Restar\n");
        printf("3. Multiplicar\n");
        printf("4. Salir\n");
        printf("Selecciona una opcion: ");
        scanf("%d", &opcion);
        switch (opcion) {
            case 1:
                resultado = sumar(num1, num2);
                printf("Resultado de la suma: %d\n\n",resultado);
                break;

            case 2:

                resultado = restar(0, 0);
                printf("Resultado de la resta: %d\n\n",resultado);
                break;

            case 3:
                printf("Ingrese primer entero:\n");
                scanf("%d",&num1);
                printf("Ingrese segundo entero:\n");
                scanf("%d",&num2);
                resultado = multiplicar(num1, num2);
                printf("Resultado de la multiplicacion: %d\n\n",resultado);
                break;
            case 4:
                printf("Saliendo de la calculadora...\n\n");
                break;
            default:
                printf("Opcion no valida. Intenta de nuevo.\n\n");
                break;
        }
    } while (opcion != 4);
    return 0;
}
//Bustos F Nicolas//
int sumar(int a, int b) {
    printf("Ingrese primer numero");
    scanf("%d",&a);
    printf("Ingrese segundo numero");
    scanf("%d",&b);
    return a+b;
}
// Manuel Ortega
int restar(int a, int b) {
    printf("ingrese el valor de primer numero\n");
    scanf("%i",&a);
    printf("ingrese el valor del segundo numero\n");
    scanf("%d",&b);

    return a-b;
}
// Facundo leon
int multiplicar(int a, int b) {

    return a*b;
}
