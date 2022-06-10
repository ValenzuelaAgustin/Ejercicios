// Alumnos: Faryno y Valenzuela

#include <stdio.h>

struct TIEMPO
{
    int horas;
    int minutos;
    int segundos;
} HORA1, HORA2, dif;

int resta=0;

int main()
{
    printf ("\nIngrese la primera hora:\t");
    scanf ("%d%d%d",&HORA1.horas, &HORA1.minutos, &HORA1.segundos);
    printf ("\nIngrese la segunda hora:\t");
    scanf ("%d%d%d",&HORA2.horas, &HORA2.minutos, &HORA2.segundos);
    
    HORA1.segundos = HORA1.segundos + HORA1.horas * 3600 + HORA1.minutos * 60;
    HORA2.segundos = HORA2.segundos + HORA2.horas * 3600 + HORA2.minutos * 60;
    
    if (HORA1.horas > HORA2.horas)
    {
        resta = HORA1.segundos - HORA2.segundos;
        dif.horas = resta / 3600;
        dif.minutos = (resta - (dif.horas*3600)) / 60;
        dif.segundos = (resta - (dif.horas*3600)) - dif.minutos * 60;
        
        printf ("\nh:%d",dif.horas);
        printf ("\nm:%d",dif.minutos);
        printf ("\ns:%d",dif.segundos);
    }
    else
    {
        resta = HORA2.segundos - HORA1.segundos;
        dif.horas = resta / 3600;
        dif.minutos = (resta - (dif.horas*3600)) / 60;
        dif.segundos = (resta - (dif.horas*3600)) - dif.minutos * 60;
        
        printf ("\nh:%d",dif.horas);
        printf ("\nm:%d",dif.minutos);
        printf ("\ns:%d",dif.segundos);
    }
}
