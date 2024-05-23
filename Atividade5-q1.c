#include <stdio.h>

#define sucesso 0

void SomarDoisNumeros (){

    float a, b, resultado;

    printf("Qual os numeros para a soma?\n :");
    scanf("%f %f", &a, &b);

    resultado = a + b;

    printf("A soma de %f e %f eh: %f\n", a, b, resultado);
}


void MultiplicarDoisNumeros (){

    float a, b, resultado;

    printf("Qual os numeros para a multiplicação?\n :");
    scanf("%f %f", &a, &b);

    resultado = a * b;

    printf("O produto de %f e %f eh: %f\n", a, b, resultado);
}

void DividirDoisNumeros (){

    float a, b, resultado;

    printf("Qual os numeros para a divisao?\n :");
    scanf("%f %f", &a, &b);

    resultado = a/b;

    printf("O quociente de %f por %f eh: %f\n", a, b, resultado);
}


int main(int argv, char ** argc){
    int opcao, sair = 1;
while(sair == 1){
    printf("Escolha uma opção de calculo para dois numeros:\n");
    printf("1 – Soma\n");
    printf("2 – Produto\n");
    printf("3 – Quociente\n");
    printf("0 – Sair\n");
    printf("Opcao: ");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        SomarDoisNumeros();
        break;
    
    case 2:
        MultiplicarDoisNumeros();
        break;

    case 3:
        DividirDoisNumeros();
        break;
    
    case 0:
        sair = 0;
        break;

    default:
    printf("Alternativa invalida\n");
        break;
    }

}

    return sucesso; 
}
