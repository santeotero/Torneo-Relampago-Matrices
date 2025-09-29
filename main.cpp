#include <iostream>
#include "funciones.h"

using namespace std;

int main()
{
    int tabla[JUGADORES][JUGADORES] = {0};
    int opcion;

    do {
        cout << "-------- Menu del Torneo --------\n";
        cout << "1 - Cargar Puntos\n";
        cout << "2 - Mostrar Tabla\n";
        cout << "3 - Reiniciar Campeonato\n";
        cout << "0 - Salir\n";
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        switch (opcion) {
        case 1:
            cargarPuntos(tabla);
            break;
        case 2:
            mostrarTabla(tabla);
            break;
        case 3:
            reiniciarCampeonato(tabla);
            break;
        case 0:
            cout << "Saliendo del programa..." << endl;
            break;
        default:
            cout << "⚠️ Opción inválida." << endl;
        }
    } while (opcion != 0);


    return 0;
}
