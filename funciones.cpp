#include <iostream>
#include "funciones.h"

using namespace std;

void mostrarTabla(int tabla[JUGADORES][JUGADORES]){
    cout << "      ";
    for (int j = 0; j < JUGADORES; j++) {
        cout << "J" << j+1 << "  ";
    }
    cout << endl;

     for (int i = 0; i < JUGADORES; i++) {
        cout << "J" << i+1 << "  ";
        for (int j = 0; j < JUGADORES; j++) {
            if (i == j) {
                cout << "-  ";
            } else {
                cout << tabla[i][j] << "  ";
            }
        }
        cout << endl;
    }

    }

void reiniciarCampeonato(int tabla[JUGADORES][JUGADORES]) {
    for (int i = 0; i < JUGADORES; i++) {
        for (int j = 0; j < JUGADORES; j++) {
            tabla[i][j] = 0;
        }
    }
    cout << "Se han reiniciado todos los puntajes." << endl;
}


void cargarPuntos(int tabla[JUGADORES][JUGADORES]) {
    int j1, j2, p1, p2;

    cout << "Ingrese numero del primer jugador (1-4): ";
    cin >> j1;
    cout << "Ingrese numero del segundo jugador (1-4): ";
    cin >> j2;

    if (j1 < 1 || j1 > 4 || j2 < 1 || j2 > 4) {
        cout << " Error: jugadores deben estar entre 1 y 4." << endl;
        return;
    }
    if (j1 == j2) {
        cout << " Error: un jugador no puede enfrentarse a si mismo." << endl;
        return;
    }

    cout << "Ingrese puntos de J" << j1 << ": ";
    cin >> p1;
    cout << "Ingrese puntos de J" << j2 << ": ";
    cin >> p2;

    tabla[j1-1][j2-1] = p1;
    tabla[j2-1][j1-1] = p2;
}
