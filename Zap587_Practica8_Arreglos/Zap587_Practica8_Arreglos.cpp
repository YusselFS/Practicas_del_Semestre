// 26_10_21_Practica8.cpp : 
// Zap587 Nombre: Carlos Yussel David Flores Sandoval
// Demostrar el funcionamiento de los arreglos

#include <iostream>
#include <cstdlib>
#include <ctime>


using namespace std;

/*
{
    int Nombre_de_la_Variable[10];
    for (int i = 0; i < 10; i = i + 1)
    {
            Nombre_de_la_Variable[i] = 9;

  for (int j = 0; j < 10; j++)
   {
        cout << "el valor es: " << Nombre_de_la_Variable[j] << endl;

    }
}

void

int main()
{
    int Nombre_del_juego[5];
    for (int i = 0; i < Nombre_del_juego; i++)
    {
        Nombre_del_juego[i] = i * 2;
    }

    string titulo[Nombre_del_juego];
    int fecha[Fecha_del_juego];
    string autor[Nombre_del_autor];

    titulo[Nombre_del_juego] = "Introduce el titulo";
    fecha[Fecha_del_juego] = "Introduce la fecha";
    autor[Nombre_del_autor] = "Introduce el autor";

    cout << "Vamos a explorar la biblioteca de juegos de Caravana" << endl;
    cout << "Iremos agregando juegos para tener un repertorio mas grande!" << endl;
    cout << "Vamos a empezar, introduce un" << Nombre_del_juego << "juego" << endl;
    cin >> Nombre_del_juego << endl;
    cout << "Introduce la fecha en la que salio el juego" << endl;
    cin >> Fecha_del_juego << endl;
    cout << "Introduce el nombre del autor" << endl;
    cin >> Nombre_del_autor << endl;

    //for (int i = 0; i < Nombre_del_juego; i++)

}*/

struct autor
{
    string* autorJuego;
};

struct datos
{
    string* titulo;
    int* fecha;
    struct autor b;
};

void llenar();
void din();
void mostrar();

datos n; int tamano;

int main()
{
    din();
    llenar();
    mostrar();
    system("pause");
    return 0;
}

void llenar()
{
    int juegos = tamano;
    for (int i = 0; i < juegos; i++)
    {
        {
            cout << "\tJuegos[" << i + 1 << "]:\n";
            cout << "\ttitulo: "; cin >> *n.titulo;
            cout << "\tfecha: "; cin >> *n.fecha;
            cout << "\tautor: "; cin >> *n.b.autorJuego;
            cout << "\n\n";
        }   cout << "\n========================================\n";
    }
}

void din()
{

    cout << "\tDigite la cantidad de juegos que se quieren consultar en Caravana: "; cin >> tamano;
    system("cls");
    n.titulo = new string[tamano];
    n.fecha = new int[tamano];
    n.b.autorJuego = new string[tamano];
}

void mostrar()
{
    int juegos = tamano;
    for (int i = 0; i < juegos; i++)
    {
        cout << "\tjuegos[" << i + 1 << "]:\n";
        cout << "\ttitulo: " << *n.titulo << endl;
        cout << "\tfecha: " << *n.fecha << endl;
        cout << "\tautor: " << *n.b.autorJuego << endl;
        cout << "\n\n";
    }
}