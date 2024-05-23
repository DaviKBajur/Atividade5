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




void PiramideDePascal(int qntlinhas){
    int n, p, num_para_imprimir;
    for (n = 0; n <= qntlinhas; n++){
        for ( p = 0; p <= n; p++)
        {
            num_para_imprimir = CalcularFatorial(n) / (CalcularFatorial(p) * CalcularFatorial(n-p));
            printf("%.3d ", num_para_imprimir);
        }
        printf("\n");
    }
    

}

int main(int argv, char ** argc){

    int a;

    printf("Diga quantas linhas vc deseja imprimir da piramide de pascal(0 a 10)\n : ");
    scanf("%d", &a);

    if(a<0 || a > 10){
        printf("Quantidade de linhas invalida");
        return sucesso;
    }
    
    PiramideDePascal(a);
    
    return sucesso;
}
