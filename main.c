#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>


void gotoxy (int x, int y);
void pantInic ();


int main()
{
    pantInic();








//Sacamos el mensaje final
    getch();
    return 0;
}







void gotoxy (int x, int y)
{
    //Controlador de ventana y manipulador de consola

    HANDLE ventana;
    ventana=GetStdHandle(STD_OUTPUT_HANDLE);

    //Creamos objeto de las coordenadas dentro de la estructura
    COORD coordenadas;

    coordenadas.X= x;
    coordenadas.Y=y;


    SetConsoleCursorPosition(ventana,coordenadas);
}

void pantInic ()
{
    int x;
    int y;
    int vida=0;
    int contador;
    int juego [DIM][DIM];

    gotoxy(40,10);
    printf("Welcome to Game of the Life\n");

    for(x=20; x<90; x++)
    {
        for(y=20; y<60; y++)
        {   juego [x][y]=0;
            gotoxy(x,y);
            printf("%c");
            printf("÷d",juego[x][y]);
        }
    }



    gotoxy(34,21);
    printf("%c",219);
    gotoxy(35,21);
    printf("%c",219);
    gotoxy(36,21);
    printf("%c", 219);
    gotoxy(36,20);
    printf("%c",219);
    gotoxy(35,19);
    printf("%c",219);





    if (vida==1&&contador<3)
    {
        gotoxy(x,y);
        printf("%c", 219);

    }





}

