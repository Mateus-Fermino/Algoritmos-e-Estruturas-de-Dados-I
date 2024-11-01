#include <stdio.h>

int main(){
    float real, dolar, cot_dolar;
    printf("Quanto você deseja converter?: ");
    scanf("%f", &real);
    printf("Qual a cotação do dolar? ");
    scanf("%f", &cot_dolar);
    dolar = real/cot_dolar;
    printf("O valor: %2.f | Convertido em Dolares sera: %2.f\n", real, dolar);
    return 0;

}