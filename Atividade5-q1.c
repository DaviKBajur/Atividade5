#include <stdio.h>

#ifdef TESTADOR
  #define PRINTF(format, ...) fprintf(stderr, format, __VA_ARGS__)
#else
  #define PRINTF(format, ...) printf(format, __VA_ARGS__)
#endif

#define sucesso 0


float SomarDoisNumeros (){

    float a, b, resultado;

    printf("Qual os numeros para a soma?\n :");
    scanf("%f %f", &a, &b);

    resultado = a + b;

    printf("A soma de %f e %f eh: ", a, b);
    return resultado;
}


float MultiplicarDoisNumeros (){

    float a, b, resultado;

    printf("Qual os numeros para a multiplicação?\n :");
    scanf("%f %f", &a, &b);

    resultado = a * b;

    printf("O produto de %f e %f eh: ", a, b);
    return resultado;
}

float DividirDoisNumeros (){

    float a, b, resultado;

    printf("Qual os numeros para a divisao?\n :");
    scanf("%f %f", &a, &b);

    resultado = a/b;

    printf("O quociente de %f por %f eh: ", a, b);
    return resultado;
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
        PRINTF("%f\n", SomarDoisNumeros());
        break;
    
    case 2:
        PRINTF("%f\n", MultiplicarDoisNumeros());
        break;

    case 3:
        PRINTF("%f\n", DividirDoisNumeros());
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
