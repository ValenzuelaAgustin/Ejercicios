/*
1) Declare una estructura para almacenar datos de estudiantes
(DNI y dos notas correspondientes a los dos cuatrimestres del año).
Haga un programa que permita ingresar los datos de 5 estudiantes en un vector de estas estructuras.
Luego de ingresar los datos se deben mostrar los DNI de cada estudiante y el promedio que tiene en sus exámenes.
*/

// Alumnos: Faryno y Valenzuela
#include <stdio.h>

int i=0;
int j=0;

struct alumno
{
    int DNI;
    float NOTAS[2];
} alumno[5];

int main()
{
    for (i=0;i<=4;++i)
    {
        printf ("\nIngrese el DNI del alumno n%d:\t",i+1);
        scanf ("%d", &alumno[i].DNI);
        for (j=0;j<=1;++j)
        {
            if (j==0)
            {
                printf ("\nIngrese la primer nota del alumno n%d:\t",i+1);
                scanf ("%f", &alumno[i].NOTAS[j]);
            }
            else
            {
                printf ("\nIngrese la segunda nota del alumno n%d:\t",i+1);
                scanf ("%f", &alumno[i].NOTAS[j]);
            }
        }
    }
    
    for (i=0;i<=4;++i)
    {
        printf ("\nEl DNI del alumno n%d es %d y el promedio de sus notas es:%.2f.",i+1,alumno[i].DNI,(alumno[i].NOTAS[0]+alumno[i].NOTAS[1])/2.0);
    }
}