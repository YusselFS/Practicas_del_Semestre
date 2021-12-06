// 07-10-21_Practica7_Adivina_quien.cpp : Este archivo contiene la función "main". 
// La ejecución del programa comienza y termina ahí.
// Carlos Yussel David Flores Sandoval

#include <iostream>
using namespace std;


int main()
{
    bool respuesta;

    cout << "Bienvenidos al Adivina Quien de League of Legends. :) \n Selecciona un campeon de la siguiente lista y el programa intentara adivinarlo." << endl;
    cout << "Campeones Demacia:\nLux.\nGaren.\nFiora.\nJarvanIV.\nKayle.\nVayne.\nXin Zhao.\nSylas.\nSona.\nShyvanna.\nQuinn.\nPoppy.\nGalio.\nMorgana.\nLucian.\n" << endl;
    cout << "Campeones Noxus:\nLeBlanc.\nDarius.\nSwain.\nDraven.\nKatarina.\nCassiopeia.\nMordekaiser.\n" << endl;
    cout << "Ingresa 1 cuando estes listo para continuar.\n";
    cin >> respuesta;

    if (respuesta == 1)

    {
        cout << "¿Tu personaje es de Demacia?\n";
        cout << "1=Si\n0=No\n";
        cin >> respuesta;

        if (respuesta == 1)
        {
            cout << "¿Tu personaje es humano?\n";
            cout << "1=Si\n0=No\n";
            cin >> respuesta;

            if (respuesta == 1)

            {
                cout << "¿Tu personaje es parte de la nobleza?\n";
                cout << "1=Si\n0=No\n";
                cin >> respuesta;

                if (respuesta == 1)
                {
                    cout << "¿Tu personaje es hombre?\n";
                    cout << "1=Si\n0=No\n";
                    cin >> respuesta;

                    if (respuesta == 1)
                    {
                        cout << "¿Tu personaje controla una lanza?\n";
                        cout << "1=Si\n0=No\n";
                        cin >> respuesta;

                        if (respuesta == 1)
                        {
                            cout << "Tu personaje es...JarvanIV!" << endl;
                            return 0;
                        }

                        else
                        {
                            cout << "¿Tu personaje controla la espada\n";
                            cout << "1=Si\n0=No\n";
                            cin >> respuesta;

                            if (respuesta == 1)
                            {
                                cout << "Tu personaje es...Garen!" << endl;
                                return 0;
                            }

                            else
                            {
                                cout << "¿Tu personaje es tirador?\n";
                                cout << "1=Si\n0=No\n";
                                cin >> respuesta;

                                if (respuesta == 1)
                                {
                                    cout << "Tu personaje es...Lucian!" << endl;
                                    return 0;
                                }

                                else
                                {
                                    cout << "Tu personaje es...Xin Zhao!" << endl;
                                    return 0;
                                }
                            }
                        }
                    }
                    else
                    {
                        cout << "Tu personaje es...Lux!" << endl;
                        return 0;
                    }
                }

                else
                {

                    cout << "¿Tu personaje es un aspecto?\n";
                    cout << "1=Si\n0=No\n";
                    cin >> respuesta;

                    if (respuesta == 1)
                    {
                        cout << "¿Tu personaje tiene alas?\n";
                        cout << "1=Si\n0=No\n";
                        cin >> respuesta;

                        if (respuesta == 1)
                        {
                            cout << "¿Tu personaje usa espadas?\n";
                            cout << "1=Si\n0=No\n";
                            cin >> respuesta;

                            if (respuesta == 1)
                            {
                                cout << "Tu personaje es...Kayle!" << endl;
                                return 0;
                            }

                            else
                            {
                                cout << "Tu personaje es...Morgana!" << endl;
                                return 0;
                            }
                        }

                        else
                        {
                            cout << "Tu personaje es...Fiora" << endl;
                            return 0;
                        }
                    }

                    else
                    {
                        cout << "¿Tu personaje es originario de Demacia?\n";
                        cout << "1=Si\n0=No\n";
                        cin >> respuesta;

                        if (respuesta == 1)
                        {
                            cout << "¿Tu personaje ama los animales?\n";
                            cout << "1=Si\n0=No\n";
                            cin >> respuesta;

                            if (respuesta == 1)
                            {
                                cout << "Tu personaje es...Quinn!" << endl;
                                return 0;
                            }

                            else
                            {
                                cout << "Tu personaje es...Vayne!" << endl;
                                return 0;
                            }
                        }

                        else
                        {
                            cout << "Tu personaje es...Sona!" << endl;
                            return 0;
                        }
                    }
                }
            }

            else
            {
                cout << "¿Tu personaje es un dragon?\n";
                cout << "1=Si\n0=No\n";
                cin >> respuesta;

                if (respuesta == 1)
                {
                    cout << "Tu personaje es...Shyvanna!" << endl;
                    return 0;
                }

                else
                {
                    cout << "¿Tu personaje es un Yordle?\n";
                    cout << "1=Si\n0=No\n";
                    cin >> respuesta;

                    if (respuesta == 1)
                    {
                        cout << "Tu personaje es...Poppy!" << endl;
                        return 0;
                    }

                    else
                    {
                        cout << "Tu personaje es...Galio!" << endl;
                        return 0;
                    }
                }
            }
        }


        cout << "¿Tu personaje es de Noxus?\n";
        cout << "1=Si\n0=No\n";
        cin >> respuesta;

        if (respuesta == 1)
        {
            cout << "¿Tu personaje es el comarca?\n";
            cout << "1=Si\n0=No\n";
            cin >> respuesta;

            if (respuesta == 1)
            {
                cout << "Tu personaje es...Swain!" << endl;
                return 0;
            }

            else
            {
                cout << "¿Tu personaje es de la rosa negra?\n";
                cout << "1=Si\n0=No\n";
                cin >> respuesta;

                if (respuesta == 1)
                {
                    cout << "Tu personaje es...LeBlanc!" << endl;
                    return 0;
                }

                else
                {
                    cout << "¿Tu personaje es de la trifarix?\n";
                    cout << "1=Si\n0=No\n";
                    cin >> respuesta;

                    if (respuesta == 1)
                    {
                        cout << "Tu personaje es...Darius!" << endl;
                        return 0;
                    }

                    else
                    {
                        cout << "Tu personaje es...Draven!" << endl;
                        return 0;
                    }
                }
            }
        }

        else
        {
            cout << "¿Tu personaje es un conquistador?\n";
            cout << "1=Si\n0=No\n";
            cin >> respuesta;

            if (respuesta == 1)
            {
                cout << "Tu personaje es...Mordekaiser!" << endl;
                return 0;
            }

            else
            {
                cout << "¿Tu personaje es humano?\n";
                cout << "1=Si\n0=No\n";
                cin >> respuesta;

                if (respuesta == 1)
                {
                    cout << "Tu personaje es...Katarina!" << endl;
                    return 0;
                }
                else
                {
                    cout << "Tu personaje es...Cassiopeia!" << endl;
                    return 0;
                }
            }
        }
    }
}