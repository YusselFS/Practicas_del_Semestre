// Novela_Narrativa.cpp
// Carlos Yussel David Flores Sandoval

#include <iostream>
using namespace std;


int main()
{
    bool respuesta;

    cout << "Bienvenidos a esta novela narrativa!. \n";
    cout << "Utilizaremos 1 para opcion -a- y 2 para opcion -b-. \n";
    cout << "Ingresa 1 cuando estes listo para empezar. \n";
    cin >> respuesta;

    if (respuesta == 1)

    {
        cout << "Eres un chico que cursa la universidad y un dia decides que todo va a cambiar y quieres ser diferente. \n";
        cout << "Creo que debemos hacer algo primero para empezar nuestro dia. \n";
        cout << "Te gustaria levantarte?. \n";
        cout << "1=Si\n0=No\n";
        cin >> respuesta;

        if (respuesta == 1)
        {
            cout << "De acuerdo, ya nos levantamos. \n";
            cout << "¿Que podriamos hacer primero?. \n";
            cout << "Deberia tomar un bano o deberia cambiarme solamente?. \n";
            cin >> respuesta;

            if (respuesta == 1)

            {
                cout << "De acuerdo! Tomaremos un bano. \n";
                cout << "Ya estamos limpios, que deberia hacer ahora?. \n";
                cout << "Deberia desayunar o irme asi a la universidad?. \n";
                cin >> respuesta;

                if (respuesta == 1)
                {
                    cout << "De acuerdo, voy a desayunar antes de ir a la uni. \n";
                    cout << "Deberia desayunar en casa o fuera?. \n";
                    cin >> respuesta;

                    if (respuesta == 1)
                    {
                        cout << "Entonces creo que desayunare en casa. \n";
                        cout << "Que podria preparar? \n";
                        cout << "Algo pesado o algo ligero? \n";
                        cin >> respuesta;

                        if (respuesta == 1)
                        {
                            cout << "Preparare desayuno como para toda una familia!" << endl;
                            cout << "Creo que comi demasiado... \n";
                            cout << "*Se mal puerquea y no asiste a clases* \n";
                            return 0;
                        }

                        else
                        {
                            cout << "Preparare un desayuno ligero como todo buen estudihambre! \n";
                            cout << "Ya estoy listo para ir directo a la uni \n";
                            cout << "Deberia ir directo a la uni? Creo que si o podria hacer algo de tiempo...? \n";
                            cin >> respuesta;

                            if (respuesta == 1)
                            {
                                cout << "Se va directo a la uni!" << endl;
                                cout << "Hoy es un buen día, hare que sea mejor! \n";
                                return 0;
                            }

                            else
                            {
                                cout << "Creo que hare un poco de tiempo... aun es temprano... \n";
                                cout << "Veo que la tienda de juegos ya esta abierta, deberia ir a dar una vuelta \n";
                                cout << "Siiiuuuuu, consegui el juego que esperaba tanto y en descuento \n";
                                cout << "Deberia ir a casa a jugarlo o ir a la uni? \n";
                                cin >> respuesta;

                                if (respuesta == 1)
                                {
                                    cout << "Creo que hoy sera un dia libre de la uni jajaja" << endl;
                                    cout << "Hoy no saldre de casa para disfrutar el juegoooooo \n";
                                    cout << "*No asiste a la uni* \n";
                                    return 0;
                                }

                                else
                                {
                                    cout << "Ire camino a la uni y jugare en la noche!" << endl;
                                    return 0;
                                }
                            }
                        }
                    }
                    else
                    {
                        cout << "De acuerdo, voy a desayunar afuera. " << endl;
                        cout << "En este punto uno me cuestiono sobre ir a la uni... \n";
                        cout << "*No asiste a la uni* \n";
                        return 0;
                    }
                }

                else
                {

                    cout << "Ire a la uni sin desayunar, que podria pasar?. \n";
                    cout << "Creo que si aguanto sin comer hasta la salida. \n";
                    cout << "Que deberia hacer ahora? Ir directo a clases o esperar afuera a mis amigos?. \n";
                    cin >> respuesta;
                }
            }

            else
            {
                cout << "Creo que solo me cambiare, el bano puede esperar. \n";
                cout << "Soy un sucio! *Se enferma y colapsa* \n";
                return 0;


            }
        }
    }
}