#include <stdio.h>

#define sucesso 0

int CalcularFatorial(int a){

    int resultado= 1;
    if (a == 0)
    {
        resultado = 1;
        return resultado;
    }

    for (int i = 1; i <= a; i++)
    {
        resultado = resultado * i;

    }
    
    return resultado;

}



int main(int argv, char ** argc){

    int a;

    printf("Diga um valor inteiro positivo\n : ");
    scanf("%d", &a);

    printf("O fatorial de %d eh %d", a, CalcularFatorial(a));
    
    return sucesso;
}