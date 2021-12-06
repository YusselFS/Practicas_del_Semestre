// 21_10_26_Practica9_Punteros.cpp : 
// Carlos Yussel David Flores Sandoval
// Punteros
// Dos matricez 2x3 y dinamica... 

#include <iostream>
#include <locale>

using namespace std;

/*{
    setlocale(LC_ALL, "spanish");
    int edad_Yuss = 22;
    int* apuntador_edad_Yuss = &edad_Yuss;


    cout << "El apuntador sin asterisco imprime :" << apuntador_edad_Yuss << " direccion de memoria" << endl;

    cout << "El apuntador con asterisco imprime :" << apuntador_edad_Yuss << " el valor de la direccion apuntada" << endl;

    cout << "El apuntador con ampersand imprime :" << &apuntador_edad_Yuss << " Direccion de memoria propia" << endl;
}*/

int main()
{
    int numeros[10][10], filas, columnas;

    cout << "Digite el numero de filas: ";
    cin >> filas;
    cout << "Digite el numero de columnas: ";
    cin >> columnas;

    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            cout << "Digite un numero [" << i << "][" << j << "]";
            cin >> numeros[i][j];
        }
    }

    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            cout << numeros[i][j];
        }
        cout << "\n";
    }
    return 0;
}
