// 3- Solicite ao usuário o preço de um produto e calcular novo preço com desconto de 9%.

#include <stdio.h>

int main(){
    float price, result;

    printf("Forneça o preço de um produto para calcular-mos o novo preço com desconto de 9 porcento: ");
    scanf("%f", &price);
    result = price - (price * 9/100);
    printf("O preço ficará: %f", result);

    return(0);
}