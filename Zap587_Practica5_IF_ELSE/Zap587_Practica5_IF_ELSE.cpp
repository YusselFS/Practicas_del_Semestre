// 2021_09_30_Practica5.cpp 
// Carlos Yussel David Flores Sandoval


#include <wchar.h>
#include <locale>
#include <iostream>
using namespace std;
int main()
{

    setlocale(LC_ALL, "spanish");
    string nombre = "Yuss";
    string nombre_leer;
    string contrasena = "contrasena";
    string contrasena_leer;
    int edad = 21;
    int edad_leer;


    {
        // Solicitar datos
        cout << "Ingresa tu nombre" << endl;
        cin >> nombre_leer;
        if (nombre == nombre_leer)
        {
            cout << "Bienvenido  " << nombre << ", ingresa tu contrasena" << endl;
            cin >> contrasena_leer;
            if (contrasena == contrasena_leer)
            {
                cout << "ingresa tu edad" << endl;
                cin >> edad_leer;
                if (edad == edad_leer)
                {

                }
                else
                {
                    cout << "La contrasena es incorrecta, vuelve a intentarlo" << endl;
                }

            }
            else
            {
                cout << "El nombre no se encuentra en la base de datos, escribe un nombre ya registrado" << endl;
            }
        }


    }

}
  