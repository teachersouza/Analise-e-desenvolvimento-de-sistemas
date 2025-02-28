#include <stdio.h>

int main(){

    char nome[2];
    int idade;
    float altura;
    int filhos;

    printf("Digite seu nome: ");
    scanf("%s", &nome);
    printf("Seu nome é %s \n \n", nome);

    printf("Digite sua idade: ");
    scanf("%d", &idade);
    printf("Sua idade é %d \n \n", idade);

    printf("Digite sua altura: ");
    scanf("%f", &altura);
    printf("Sua altura é %.2f \n \n", altura);

    printf("Digite a quantidade de filhos: ");
    scanf("%d", &filhos);
    printf("A quantidade de filhos é %d \n \n \n", filhos);

return 0;

}