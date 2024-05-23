#include <stdio.h>
#include <stdbool.h>

#define sucesso 0

int VerificarSeEhPrimo(int a){
    int contador = 0;
    bool verificar;
    for (int i = 2; i < a; i++)
    {
        if (a % i == 0)
        {
            contador++;
        }
        
    }
    
    verificar = contador == 0;
    
return verificar;
}

int main(int argv, char ** argc){

    int a;

    printf("Qual o numero que voce deseja verificar se eh primo?\n : ");
    scanf("%d", &a);

    if (VerificarSeEhPrimo(a))
    {
        printf("eh primo\n");
    }else
    {
        printf("nao eh primo");
    }
    
    
    return sucesso;
}