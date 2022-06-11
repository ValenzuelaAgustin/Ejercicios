// Alumnos: Faryno y Valenzuela

#include <stdio.h>

struct TIEMPO
{
    int horas;
    int minutos;
    int segundos;
} HORA1, HORA2, dif;

int main()
{
    printf ("\nIngrese la hora de inicio:\t");
    scanf ("%d%d%d",&HORA1.horas, &HORA1.minutos, &HORA1.segundos);
    printf ("\nIngrese la hora de finalizacion:\t");
    scanf ("%d%d%d",&HORA2.horas, &HORA2.minutos, &HORA2.segundos);
    
   // HORA1 1 50 35
   // HORA2 2 40 30
   // dif   0 49 55
    
    if (HORA1.horas <= HORA2.horas)
    {
        dif.horas = HORA2.horas - HORA1.horas;
        
        if (HORA1.minutos > HORA2.minutos) 
        {
            dif.minutos = 60 - (HORA1.minutos - HORA2.minutos);
            --dif.horas;
        }
        else
        {
            dif.minutos = HORA2.minutos - HORA1.minutos;
        }
        
        if (HORA1.segundos > HORA2.segundos)
        {
            dif.segundos = 60 - (HORA1.segundos - HORA2.segundos);
            --dif.minutos;
        }
        else
        {
            dif.segundos = HORA2.segundos - HORA1.segundos;
        }
        printf ("\nh:%d",dif.horas);
        printf ("\nm:%d",dif.minutos);
        printf ("\ns:%d",dif.segundos);
    }
    else
    {
        printf ("\nError: La hora de incio es menor a la final.");
        return 0;
    }
}
