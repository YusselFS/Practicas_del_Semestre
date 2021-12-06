// 28_10_21_Practica10.cpp 
// Zap587 Nombre: Carlos Yussel David Flores Sandoval
// BattleRoyal

/*#include <iostream>
#include <time.h>
#include <stdlib.h>
#include < string>

using namespace std;

struct Persona
{
    int defensa;
    int Ataque;
    int Poder;
    int Velocidad;
    int Powerup;
}Jugador;

void main()
{
    srand(time(NULL));
    Persona JP;
    Persona Ferchus;
    JP.Ataque = rand() % 10;
    Ferchus.Ataque = rand() % 10;

    if (Ferchus.Ataque < JP.Ataque)
    {
        cout << "JP es el más fuerte " << endl;
    }
    if (Ferchus.defensa > JP.defensa)
    {
        cout << "Ferchus es el mas macizo " << endl;
    }
}*/

#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <string>

using namespace std;

struct persona
{
    string nombre;
    int Vida;
    int Ataque;
    int Defensa;
    int Poder;
    int velocidad;
    int Powerup;
}jugador[20]; 

int main()
{
    cout << "Bienvenidos al Battle Royal, somos 20 participantes. SOLO UNO VIVIRA" << endl;

    string nombre[] = { "Karen", "Alejandro", "Angel_Jacinto", "Dylan", "Ricardo", "Oscar_Josue", "Yussel", "Fernando", "Kuvassi", "Angel_Arcienega", "Jair", "Israel", "Patricio", "Oscar", "Juan_Pablo", "Eric", "Rodrigo", "Abraham", "Kevin" };

    srand(time(NULL));
 
    jugador[0].nombre = nombre[0];
    jugador[0].Vida = rand() % 20;
    jugador[0].Ataque = rand() % 10;
    jugador[0].Defensa = rand() % 10;
    jugador[0].Poder = rand() % 10;
    jugador[0].velocidad = rand() % 10;
    jugador[0].Powerup = rand() % 10;

    for (int i = 0; i < 20; i++) {
        jugador[i].nombre = nombre[i]; 
        jugador[i].Ataque = rand() % 10;
        jugador[i].Defensa = rand() % 10;
        jugador[i].Poder = rand() % 10;
        jugador[i].velocidad = rand() % 10;
        jugador[i].Powerup = rand() % 10;
        cout << "Jugador : " << jugador[i].nombre << " Vida: " << jugador[i].Vida << "  Ataque: " << jugador[i].Ataque << "  Defensa: " << jugador[i].Defensa << "  Poder: " << jugador[i].Poder << "  PowerUp: " << jugador[i].Powerup << "  Velocidad: " << jugador[i].velocidad << endl;
    }
    return 0;
}