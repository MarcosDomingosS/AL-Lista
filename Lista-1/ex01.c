// 1- Receba via teclado um número qualquer e exiba o seu sucessor e seu antecessor. 

#include <stdio.h>

int main(){
    int num, suc, ant;
    printf("Digite um número qualquer: ");
    scanf("%d", &num);
    suc = num + 1;
    ant = num - 1;

    printf("\nO sucessor é: %d", suc);
    printf("\nO antecessor é: %d", ant);

    return(0);
}