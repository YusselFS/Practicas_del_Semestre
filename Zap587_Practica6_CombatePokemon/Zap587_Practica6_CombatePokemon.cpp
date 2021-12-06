// 2021_10_03_Practica6_batalla_pokemon.cpp 
//Carlos Yussel David Flores Sandoval
//Practica de pokémon

#include <iostream>
using namespace std;

int main()
{
    bool inicio = false;
    string pokemon_1 = "Snivy";
    string pokemon_2 = "Tepig";
    string pokemon_3 = "Oshawott";
    string pokemon_4 = "Mewtwo";
    int opt = 0;
    int a, eleccion_pokemon, encuentro1, encuentro2, encuentro3, encuentro4;


    while (inicio == false)
    {

        cout << " Bienvenido a la region de Teselia \n Selecciona a tu pokemon inicial" << endl;
        cout << " 1- Snivy\n 2- Tepig\n 3- Oshawott" << endl;
        cin >> eleccion_pokemon;
        switch (eleccion_pokemon)
        {
        case 1:
            cout << " Felicidades acabas de recibir a tu primer pokemon :) \n Elegiste a " << pokemon_1 << endl;
            cout << " Aqui comienza tu aventura \n *caminas a las afueras de tu pueblo*, te encuentras en pueblo Arcilla \n De repente ves algo moverse \n" << endl;
            cout << " +++ Hay algo en la hierba alta +++ \n " << endl;
            cout << " Que te gustaria hacer? \n 1- Lo rodeas \n 2- Te adentras a la hierva" << endl;
            cin >> a;
            cout << " El joven Chano aparece \n Cuando un entrenador ve los ojos de otro, la batalla comienza" << endl;

            cout << " * Eliges a " << pokemon_1 << " para luchar *" << endl;
            cout << " * El joven Chano saca a Rattata * " << endl;
            cout << " ¡El combate va a comenzar! \n" << endl;
            for (int i = 0; i <= 5; i = i + 1)
            {
                if (i == 0)
                {
                    cout << " ¡La batalla comenzo! " << endl;
                }
                cout << "elige tu accion \n1.- hoja afilada \n2.- deteccion\n" << endl;
                cin >> encuentro2;
                switch (encuentro2)
                {
                case 1:
                    cout << " * usaste hoja afilada * " << endl;
                    cout << " el enemigo perdio 3 HP \n" << endl;
                    cout << " * El joven Chano uso aranazo * \n pierdes 2 de HP\n" << endl;
                    break;
                case 2:
                    cout << " * usaste deteccion * " << endl;
                    cout << " Bloqueas y evitas daño \n" << endl;
                    break;
                default:
                    cout << " selecciona una accion " << endl;
                }
                cout << " La batalla continua" << endl;
                if (i == 5)
                {
                    cout << " La batalla ha terminado! \n tu oponente ya no puede continuar \n Has derrotado al joven Chano! Has ganado!" << endl;
                }
            }

            inicio = true;
            break;
        case 2:
            cout << " Felicidades acabas de recibir a tu primer pokemon :) \n Elegiste a " << pokemon_2 << endl;
            cout << " Aqui comienza tu aventura \n *caminas a las afueras de tu pueblo*, te encuentras en pueblo Arcilla \n De repente ves algo moverse \n" << endl;
            cout << " +++ Hay algo en la hierba alta +++ \n " << endl;
            cout << " Que te gustaria hacer? \n 1- Lo rodeas \n 2- Te adentras a la hierva" << endl;
            cin >> a;
            cout << " El joven Chano aparece \n Cuando un entrenador ve los ojos de otro, la batalla comienza" << endl;

            cout << " * Eliges a " << pokemon_2 << " para luchar *" << endl;
            cout << " * El joven Chano saca a Rattata * " << endl;
            cout << " ¡El combate va a comenzar! \n" << endl;
            for (int i = 0; i <= 5; i = i + 1)
            {
                if (i == 0)
                {
                    cout << " ¡La batalla comenzo! " << endl;
                }
                cout << " elige tu accion\n1.- ascuas \n2.- proteccion " << endl;
                cin >> encuentro2;
                switch (encuentro2)
                {
                case 1:
                    cout << " * usaste ascuas * " << endl;
                    cout << " el enemigo perdio 3 HP \n" << endl;
                    cout << " *El joven Chano uso arañazo * " << endl;
                    cout << " pierdes 2 de HP \n" << endl;
                    break;
                case 2:
                    cout << " * usaste proteccion * " << endl;
                    cout << " *El joven Chano uso endurecer * " << endl;
                    cout << " Bloqueas pierdes 1 HP \n" << endl;

                    break;
                default:
                    cout << " selecciona una accion " << endl;
                }
                cout << "  La batalla continua " << endl;
                if (i == 5)
                {
                    cout << " La batalla ha terminado! \n tu oponente ya no puede continuar \n Has derrotado al joven Chano! Has ganado!" << endl;
                }

            }
            inicio = true;
            break;
        case 3:
            cout << " Felicidades acabas de recibir a tu primer pokemon :) \n Elegiste a " << pokemon_3 << endl;
            cout << " Aqui comienza tu aventura \n *caminas a las afueras de tu pueblo*, te encuentras en pueblo Arcilla \n De repente ves algo moverse \n" << endl;
            cout << " +++ Hay algo en la hierba alta +++ \n " << endl;
            cout << " Que te gustaria hacer? \n 1- Lo rodeas \n 2- Te adentras a la hierva" << endl;
            cin >> a;
            cout << " El joven Chano aparece \n Cuando un entrenador ve los ojos de otro, la batalla comienza" << endl;

            cout << " * Eliges a " << pokemon_3 << " para luchar *" << endl;
            cout << " * El joven Chano saca a Rattata * " << endl;
            cout << " ¡El combate va a comenzar! \n" << endl;
            for (int i = 0; i <= 5; i = i + 1)
            {
                if (i == 0)
                {
                    cout << " ¡La batalla comenzo! " << endl;
                }
                cout << "elige tu accion \n1.- pistola de agua \n2.- campana cura " << endl;
                cin >> encuentro3;
                switch (encuentro3)
                {
                case 1:
                    cout << " * usaste pistola de agua * " << endl;
                    cout << " el enemigo perdio 3 HP \n" << endl;
                    cout << " *El joven Chano uso endurecer * " << endl;
                    break;
                case 2:
                    cout << " * usaste campana cura * " << endl;
                    cout << " *El joven Chano uso endurecer * " << endl;
                    cout << " Bloqueas y te curas 1 HP \n" << endl;
                    break;
                default:
                    cout << "selecciona una accion" << endl;
                    break;

                }
                cout << "  La batalla continua " << endl;
                if (i == 5)
                {
                    cout << " La batalla ha terminado! \n tu oponente ya no puede continuar \n Has derrotado al joven Chano! Has ganado!" << endl;
                }
            }


        case 4:
            cout << " Felicidades acabas de recibir a tu primer pokemon :) \n Elegiste a " << pokemon_4 << endl;
            cout << " Aqui comienza tu aventura \n *caminas a las afueras de tu pueblo*, te encuentras en pueblo Arcilla \n De repente ves algo moverse \n" << endl;
            cout << " +++ Hay algo en la hierba alta +++ \n " << endl;
            cout << " Que te gustaria hacer? \n 1- Lo rodeas \n 2- Te adentras a la hierva" << endl;
            cin >> a;
            cout << " El joven Chano aparece \n Cuando un entrenador ve los ojos de otro, la batalla comienza" << endl;

            cout << " * Eliges a " << pokemon_4 << " para luchar *" << endl;
            cout << " * El joven Chano saca a Rattata * " << endl;
            cout << " ¡El combate va a comenzar! \n" << endl;
            for (int i = 0; i <= 5; i = i + 1)
            {
                if (i == 0)
                {
                    cout << " ¡La batalla comenzo! " << endl;
                }
                cout << "elige tu accion \n1.- Psiquico \n2.- telequinesis " << endl;
                cin >> encuentro4;
                switch (encuentro4)
                {
                case 1:
                    cout << " * usaste psiquico * " << endl;
                    cout << " el enemigo perdio 100 HP \n" << endl;
                    cout << " *El joven Chano perdio * " << endl;
                    break;
                case 2:
                    cout << " * usaste telequinesis* " << endl;
                    cout << " *El joven Chano uso endurecer * " << endl;
                    cout << " *El Rattata salio volando, el rattata ya no puede continuar* \n" << endl;
                    break;
                default:
                    cout << "selecciona una accion" << endl;
                    break;

                }

                cout << " La batalla ha terminado! \n tu oponente ya no puede continuar \n Has derrotado al joven Chano! Has ganado!" << endl;

                inicio = true;

                break;


            }
        }
    }
}