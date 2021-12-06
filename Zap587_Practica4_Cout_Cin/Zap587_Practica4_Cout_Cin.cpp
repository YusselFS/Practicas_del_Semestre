// 21_09_21_1er_Practica_Cout_Cin.cpp : 
// Carlos Yussel David Flores Sandoval
// Practicando con funciones, valores y datos, usando Coun y Cin con Printf y Scanf
// Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//


#include <iostream>
#include <cstdlib>
#include <stdio.h>

using namespace std;
int main()

{
    cout << "Hola a todos!" << endl;
    cout << "Seguimos con esta practica" << endl;
    bool mi_primer_booleano;
    int mi_primer_entero;
    float mi_primer_flotante;
    double mi_primer_double;
    long double mi_primer_long_double;
    char mi_primer_char;
    char caracter[20] = "carlos yussel david";

    printf("%s \n", caracter);

    long long int mi_primer_long_long_int;
    string mi_primer_string;


    cout << "ingresa un numero booleano" << endl;
    cin >> mi_primer_booleano;
    cout << "ingresaste el valor:" << mi_primer_booleano << endl;
    cout << "ingresa un numero int" << endl;
    cin >> mi_primer_entero;
    cout << "ingresaste el valor:" << mi_primer_entero << endl;
    cout << "Ingresa un numero float" << endl;
    cin >> mi_primer_flotante;
    cout << "ingresaste el valor:" << mi_primer_flotante << endl;
    cout << "ingresa un numero double" << endl;
    cin >> mi_primer_double;
    cout << "ingresaste el valor:" << mi_primer_double << endl;
    cout << "ingresa un numero long double" << endl;
    cin >> mi_primer_long_double;
    cout << "ingresaste el valor:" << mi_primer_long_double << endl;
    cout << "ingresa un caracter char" << endl;
    cin >> mi_primer_char;
    cout << caracter[20];
    cout << "ingresaste un valor" << mi_primer_char << endl;
    cout << "ingresaste un numero long long int" << endl;
    cin >> mi_primer_long_long_int;
    cout << "ingresaste el valor:" << mi_primer_long_long_int << endl;
    cout << "introduce una palabra string" << endl;
    cin >> mi_primer_string;
    string nombre = "yussel";
    int posicion;
    cout << "Indica una posicion y la convertire en mayuscula: ";
    cin >> posicion;
    nombre[posicion] = nombre[posicion] - 32;
    cout << nombre << endl;

    printf("ingresa un numero booleano\n");
    scanf_s("%d", &mi_primer_booleano);
    printf("Ingresaste el valor: %d\n", mi_primer_booleano);

    printf("ingresa un numero int\n");
    scanf_s("%d", &mi_primer_entero);
    printf("Ingresaste el valor: %d\n", mi_primer_entero);

    cout << "Bool:" << mi_primer_booleano << endl;
    cout << "Int:" << mi_primer_entero << endl;
    cout << "Float:" << mi_primer_flotante << endl;
    cout << "Double:" << mi_primer_double << endl;
    cout << "String:" << mi_primer_string << endl;

}
