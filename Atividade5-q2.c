#include <stdio.h>

#define sucesso 0
#define Dias_no_mes 30
#define Dias_no_ano 365

int CalcularDiasTotais(int dias, int meses, int anos){
    dias = dias + (meses * Dias_no_mes) + (anos * Dias_no_ano);
    return dias;
}

int main(int argv, char ** argc){

    int anos, meses, dias, diastotais;

    printf("diga quantos anos dias e meses voce possui (ex: 18/05/20, ou seja 20 anos 5 meses e 18 dias)\n : ");
    scanf("%d/%d/%d", &dias, &meses, &anos);

    diastotais = CalcularDiasTotais(dias, meses, anos);

    printf("%d dias %d meses e %d anos equivalem a %d dias",dias, meses, anos, diastotais);

    return sucesso;
}
