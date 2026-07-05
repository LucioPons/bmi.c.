 #include <stdio.h>

int main() {
    float peso, altura, imc;

    printf("Ingrese su peso en kg: ");
    scanf("%f", &peso);

    printf("Ingrese su altura en metros: ");
    scanf("%f", &altura);

    imc = peso / (altura * altura);

    printf("\nIndice de Masa Corporal (IMC): %.2f\n\n", imc);

    printf("Tabla de referencia:\n");
    printf("-----------------------------\n");
    printf("Indice\t\tCondicion\n");
    printf("-----------------------------\n");
    printf("<18.5\t\tBajo peso\n");
    printf("18.5 a 24.9\tNormal\n");
    printf("25.0 a 29.9\tSobrepeso\n");
    printf(">=30\t\tObesidad\n");
 if (imc < 18.5) {
        printf("Condicion: Bajo peso\n");
    } else if (imc < 25.0) {
        printf("Condicion: Normal\n");
    } else if (imc < 30.0) {
        printf("Condicion: Sobrepeso\n");
    } else {
        printf("Condicion: Obesidad\n");
 }

    return 0;
}
