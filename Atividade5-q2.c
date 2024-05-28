#include <stdio.h>

#ifdef TESTADOR
  #define PRINTF(format, ...) fprintf(stderr, format, __VA_ARGS__)
#else
  #define PRINTF(format, ...) printf(format, __VA_ARGS__)
#endif



#define sucesso 0
#define Dias_no_mes 30
#define Dias_no_ano 365

int CalcularDiasTotais(int dias, int meses, int anos){
    dias = dias + (meses * Dias_no_mes) + (anos * Dias_no_ano);
    return dias;
}

int main(int argv, char ** argc){

    int anos, meses, dias, diastotais;

    printf("diga quantos anos meses e dias voce possui (ex: 18/05/20, ou seja 18 anos 5 meses e 20 dias)\n : ");
    scanf("%d/%d/%d", &anos, &meses, &dias);

    diastotais = CalcularDiasTotais(dias, meses, anos);

    printf("%d dias %d meses e %d anos equivalem a ",dias, meses, anos);
    PRINTF("%d", diastotais);
    printf(" dias\n");

    return sucesso;
}
