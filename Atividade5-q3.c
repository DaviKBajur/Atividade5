#include <stdio.h>

#define sucesso 0

void CorverterSegundosEmHorasEMinutos(int segundos_totais){

    int segundos = 0, minutos = 0, horas = 0;

    horas = segundos_totais / 3600;
    segundos = segundos_totais % 3600;

    minutos = segundos / 60;
    segundos = segundos % 60;

    printf("| Horas: %d | Minutos: %d | Segundos: %d |\n",horas, minutos, segundos );
}

int main(int argv, char ** argc){

    int segundos_totais;

    printf("Quantos são os segundos totais?\n : ");
    scanf("%d", &segundos_totais);

    CorverterSegundosEmHorasEMinutos(segundos_totais);
    return sucesso;
}