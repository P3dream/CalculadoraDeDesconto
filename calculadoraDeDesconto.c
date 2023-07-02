#include <stdio.h>

int main()
{
    printf("Digite o valor total da compra:\n");
    float valorCompra = 0;
    scanf("%f",&valorCompra);
    
    printf("Quantos descontos foram aplicados?\n");
    int n;
    float totalDesconto=0;
    float var = 0;
    
    scanf("%d",&n);
    for(int i = 1 ; i <= n; i ++){
        printf("Digite o valor do desconto %d: \n",i);
        scanf("%f",&var);
        totalDesconto += var;
    }
    
    printf("Porcentagem de desconto foi: %.2f ",totalDesconto/valorCompra);
    
    printf("Qual é o valor total em itens da pessoa (Sem desconto):\n ");
    
    float totalEmItens = 0;
    
    scanf("%f",&totalEmItens);
    
    printf("O valor a ser pago é: %.2f", (1-(totalDesconto/valorCompra))*totalEmItens);
    

    return 0;
}
