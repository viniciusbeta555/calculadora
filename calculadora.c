#include <stdio.h> //BIBLIOTECA PADRÃO DO C: FUNÇÃO DE ENTRADA E SAIDA DE DADOS

int main (){

    int oper, quant, n;
    int mult = 1;
    float a, result, div1, div2;

    printf("\nEscolha uma operação matematica: \n"); // SELECIONA A OPERAÇÃO QUE VAI SER USADA
    printf("Somar = 1\n");
    printf("Subtrair = 2\n");
    printf("Multiplicar = 3\n");
    printf("Dividir = 4\n");
    scanf("%d", &oper);

    if(oper == 1){  // OPÇÃO ESCOLHIDA = SOMA
        printf("Quantos valores voce gostaria de somar?\n"); // INSERIR A QUANTIDADE QUE DESEJA SOMAR
        scanf("%d",&quant);

        for(n = 0; n < quant; n++){
            printf("Digite o valor: ");
            scanf("%f",&a);

            result = result + a;
        }
        printf("\nO resultado é: %.2f", result);
    }

    if(oper == 2){   // OPÇÃO ESCOLHIDA = SUBTRAÇÃO
        printf("Quantos valores voce gostaria de subtrair?\n"); // INSERIR A QUANTIDADE QUE DESEJA SOMAR
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

    if(oper == 3){  // OPÇÃO ESCOLHIDA = MULTIPLICAÇÃO
        printf("Quantos valores voce gostaria de multiplicar?\n"); // INSERIR A QUANTIDADE QUE DESEJA SOMAR
        scanf("%d",&quant);

        for(n = 0; n < quant; n++){
            printf("Digite o valor: ");
            scanf("%f",&a);

            mult = mult * a;
        }
        printf("\nO resultado é: %d", mult);
    }

    if(oper == 4){  // OPÇÃO ESCOLHIDA = DIVISÃO
        
        printf("Digite o primeiro valor: \n");  // DIVIDENDO: numero que será dividido
        scanf("%f",&div1);
        printf("Digite o segundo valor: \n");  // DIVISOR: o numero que irá dividir o dividendo
        scanf("%f",&div2);

        result = div1/div2;

        printf("\nO resultado é: %.2f", result);
    }
}