#include <stdio.h>

int main()
{
    double precoProduto, dinheiroRecebido, troco;
    int quantidade;

    printf("Preco unitario do produto: ");
    scanf("%lf", &precoProduto);
    printf("Quantidade comprada: ");
    scanf("%d", &quantidade);
    printf("Dinheiro recebido: ");
    scanf("%lf", &dinheiroRecebido);

    troco = dinheiroRecebido - precoProduto * quantidade;
    if(troco > 0){
      printf("\nTROCO = %.2lf\n", troco);
      }else if (troco < 0){
              printf("\nFALTA = %.2lf\n", -troco);
        } else {
         printf("\nPAGAMENTO CONCLUIDO!\n");
        }
    return 0;
}
