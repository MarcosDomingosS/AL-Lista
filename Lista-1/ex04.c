// 4- Leia o preço de um produto e inflaciona esse preço em 10% se ele for menor que 100 e em 20% se ele for maior ou igual a 100.

#include <stdio.h>

int main(){
    float price, result;
    printf("Preço do produto: ");
    scanf("%f", &price);

    if(price < 100){
        result = price + (price / 10);
    }else{
        result = price + (price / 5);
    }

    printf("O preço ficará: %f", result);

    return(0);
}