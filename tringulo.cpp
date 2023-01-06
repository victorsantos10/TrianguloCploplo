#include "graphics.h"
#pragma comment(lib,"graphics.lib")
#include <cstdlib>
#include <ctime>
#include<stdio.h>
/* Titulo: Triangulo
Equip       :
Participantes:   
Adrian Bastardo        ID : 1105264
Alexa  Guzmán          ID : 1101488
José L.Cruz            ID : 1106529
Eros Bencosme          ID : 1104510
Manuel Mancebo         ID : 1105615
Victor Santos          ID : 1105977
Fecha : 22 / 12 / 2022
Materia :  Estructura de Datos y Algoritmos II
Profesor : Casimiro Gilberto Cordero Ramirez*/
const int ANCHO_PANTALLA = 600;
const int PANTALLA_ALTURA = 400;
const int NUM_ITERACIONES = 1000000;

int main()
{
    
    initwindow(ANCHO_PANTALLA, PANTALLA_ALTURA);
    
    // Establecer las coordenadas de los tres puntos del triángulo.
    int x1 = ANCHO_PANTALLA / 2;
    int y1 = 0;
    int x2 = 0;
    int y2 = PANTALLA_ALTURA;
    int x3 = ANCHO_PANTALLA;
    int y3 = PANTALLA_ALTURA;

     
    //Establecer las coordenadas para el cuarto punto fuera del triángulo.
    int x4 = ANCHO_PANTALLA / 2;
    int y4 = PANTALLA_ALTURA / 2;

    // genera los numeros aleatorios
    srand(time(NULL));

    // Iterar NUM_ITERACIONES veces
    for (int i = 0;i < NUM_ITERACIONES; i++)
    { 
        //Tira los dados y mueve el cuarto punto según el resultado.
        int TiraDados = rand() % 3 + 1;
        if (TiraDados == 1)
        {
            x4 = (x4 + x1) / 2;
            y4 = (y4 + y1) / 2;
        }
        else if (TiraDados == 2)
        {
            x4 = (x4 + x2) / 2;
            y4 = (y4 + y2) / 2;
        }
        else if (TiraDados == 3)
        {
            x4 = (x4 + x3) / 2;
            y4 = (y4 + y3) / 2;
        }

        //Dibuja el triángulo y el cuarto punto.
        line(x1, y1, x2, y2);
        line(x2, y2, x3, y3);
        line(x3, y3, x1, y1);
        putpixel(x4, y4, WHITE);

        // Actualiza la pantalla 
      //  delay(1);
    
    }


    system("pause");
    return 0;
}