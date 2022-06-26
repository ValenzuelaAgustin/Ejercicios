/*
3) Utilice el ejercicio 1, modificándolo para que las notas del estudiante estén en un vector de notas dentro de la estructura.
Este vector de notas puede almacenar hasta 10 notas del alumno.
Los lugares no utilizados se escriben con un valor -1 para indicar que ese lugar está vacío.
De esta manera, un estudiante puede haber rendido 2 exámenes, otro 4 y otro 10, para citar algunos ejemplos. 

Se pide conservar la funcionalidad del programa teniendo en cuenta esta nueva organización de la información.
Por lo tanto, para mostrar el promedio del estudiante, habrá que considerar las notas que tiene en este vector de notas,
teniendo cuidado en utilizar solamente las notas que existan y omitiendo los -1 que pueda haber.
*/
#include <stdio.h>

int cant_alumnos=0;
int cant_nota=0;
int i=0;
int j=0;

int main()
{
    while (cant_alumnos<=0)
    {
        printf ("\nIngrese la cantidad de alumnos:\t");
        scanf ("%d",&cant_alumnos);
        
        if (cant_alumnos<=0)
        {
            printf("\nError: Ingrese un numero entero positivo de alumnos.\n");
        }
    }

    struct alumno
    {
        int DNI;
        float NOTAS[10];
        float prom;
    } alumno[cant_alumnos];
    
    for (i=0;i<cant_alumnos;++i)
    {
        for (j=0;j<10;++j)
        {
            alumno[i].NOTAS[j] = -1;
        }
    }
    
    for (i=0;i<cant_alumnos;++i)
    {
        printf ("\nIngrese el DNI del alumno n%d:\t",i+1);
        scanf ("%d", &alumno[i].DNI);
        
        while (cant_nota<=0)
        {
            printf ("\nIngrese la cantidad de notas del alumno n%d:\t:",i+1);
            scanf ("%d",&cant_nota);
            if (cant_nota<=0)
            {
                printf("\nError: Ingrese un numero entero positivo de notas.\n");
            }
        }
        
        for (j=0;j<cant_nota;++j)
        {
            printf ("\nIngrese la nota n%d del alumno n%d:\t",j+1,i+1);
            scanf ("%f", &alumno[i].NOTAS[j]);
        }
        cant_nota = 0;
    }

    for (i=0;i<cant_alumnos;++i)
    {
        for (j=0;j<10;++j)
        {
            if (alumno[i].NOTAS[j] != -1)
            {
                alumno[i].prom = alumno[i].prom + alumno[i].NOTAS[j];
                ++cant_nota;
            }
        }
        alumno[i].prom = alumno[i].prom / cant_nota;
        cant_nota = 0;
        printf ("\nEl DNI del alumno n%d es %d y el promedio de sus notas es: %.2f.", i+1, alumno[i].DNI, alumno[i].prom);
    }
}