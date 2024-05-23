#include <stdio.h>

#define sucesso 0
#define Primeiro_Numero 1

void Fibonacci(int quant_de_numeros){
    
    int num1=0, num2=1, num3;

    printf("%d ", Primeiro_Numero);

    for (int i = 2; i <= quant_de_numeros; i++)
    {
        num3 = num1 + num2;
        printf("%d ", num3);
        num1 = num2;
        num2 = num3;

    }
    
}

int main(int argv, char ** argc){

    int a;

    printf("Diga quantos numeros da sequencia de fibonacci devem ser mostrados\n : ");
    scanf("%d", &a);

    Fibonacci(a);
    return sucesso;
}
