#include <stdio.h>

int main (){

    int oper, quant, n, x, y;
    int mult = 1;
    float a, result;

    printf("\nEscolha uma operação matematica: \n");
    printf("Somar = 1\n");
    printf("Subtrair = 2\n");
    printf("Multiplicar = 3\n");
    printf("Dividir = 4\n");
    scanf("%d", &oper);

    if(oper == 1){
        printf("Quantos valores voce gostaria de somar?\n");
        scanf("%d",&quant);

        for(n = 0; n < quant; n++){
            printf("Digite o valor: ");
            scanf("%f",&a);

            result = result + a;
        }
        printf("\nO resultado é: %.2f", result);
    }

    if(oper == 2){
        printf("Quantos valores voce gostaria de subtrair?\n");
        scanf("%d",&quant);

        for(n = 0; n < quant; n++){
            printf("Digite o valor: ");
            scanf("%f",&a);

            if(n==0){
                result = a - result;
            }else{
                result = result - a;
            }
        }
        printf("\nO resultado é: %.2f", result);
    }

    if(oper == 3){
        printf("Quantos valores voce gostaria de multiplicar?\n");
        scanf("%d",&quant);

        for(n = 0; n < quant; n++){
            printf("Digite o valor: ");
            scanf("%f",&a);

            mult = mult * a;
        }
        printf("\nO resultado é: %d", mult);
    }

    if(oper == 4){ 
        
        printf("Digite o primeiro valor: \n");
        scanf("%d",&x);
        printf("Digite o segundo valor: \n");
        scanf("%d",&y);

        result = x/y;

        printf("\nO resultado é: %.2f", result);
    }
}