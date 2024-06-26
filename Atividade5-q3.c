#include <stdio.h>

#ifdef TESTADOR
  #define PRINTF(format, ...) fprintf(stderr, format, __VA_ARGS__)
#else
  #define PRINTF(format, ...) printf(format, __VA_ARGS__)
#endif

#define sucesso 0
#define Segundos_Em_Hora 3600
#define Segundos_Em_Minuto 60

void CorverterSegundosEmHorasEMinutos(int segundos_totais){

    int segundos = 0, minutos = 0, horas = 0;

    horas = segundos_totais / Segundos_Em_Hora;
    segundos = segundos_totais % Segundos_Em_Hora;

    minutos = segundos / Segundos_Em_Minuto;
    segundos = segundos % Segundos_Em_Minuto;

    PRINTF("%02d:%02d:%02d", horas, minutos, segundos);
}

int main(int argv, char ** argc){

    int segundos_totais;

    printf("Quantos são os segundos totais?\n : ");
    scanf("%d", &segundos_totais);

    CorverterSegundosEmHorasEMinutos(segundos_totais);
    return sucesso;
}
