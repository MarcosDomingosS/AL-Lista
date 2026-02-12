// 2- Receba via teclado um número positivo e exiba esse valor com acréscimo de 10%.

#include <stdio.h>

int main(){
    int num, result;
    printf("Digite um número positivo: ");
    scanf("%lu", &num);
    result = num + num/10;
    printf("\nO valor com acréscimo de 10 porcento é: %lu", result);

    return(0);
}