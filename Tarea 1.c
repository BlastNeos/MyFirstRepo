#include <stdio.h>

int main() {
    double num1, num2;
    double suma, resta, multiplicacion, division;

    //Scaneo de los números
    printf("Introduce el primer número: ");
    scanf("%lf", &num1);
    printf("Introduce el segundo número: ");
    scanf("%lf", &num2);

    //Suma, resta y multiplicación
    suma = num1 + num2;
    resta = num1 - num2;
    multiplicacion = num1 * num2;

    //División
    if (num2 != 0) {
        division = num1 / num2;
    } else {
        printf("Error: División por cero no está permitida.\n");
    }

    printf("Suma: %.2f\n", suma);
    printf("Resta: %.2f\n", resta);
    printf("Multiplicación: %.2f\n", multiplicacion);
    if (num2 != 0) {
        printf("División: %.2f\n", division);
    }

    return 0;
}