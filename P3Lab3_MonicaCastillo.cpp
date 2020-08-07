#include <iostream>
#include <string>
#include "Biblioteca.hpp"
using namespace std;
int main() {
    char respuesta = 's';
    while (respuesta == 's') {
        int opcion;
        cout << "1. Crear Biblioteca" << endl;
        cout << "2. Agregar Libro" << endl;
        cout << "3. Buscar por Titulo" << endl;
        cout << "4. Buscar por Autor" << endl;
        cout << "5. Explorar Biblioteca" << endl;
        cout << "6. Salida" << endl;
        cout << "Ingrese una opcion: ";
        cin >> opcion;
        switch (opcion) {
        case 1: {
            string nombre = "";
            cout << "Ingrese el nombre de la biblioteca: ";
            getline(cin, nombre);
            getline(cin, nombre);
            string ubicacion = "";
            cout << "Ingrese la ubicacion de la biblioteca: ";
            getline(cin, ubicacion);
            int numpisos;
            cout << "Ingrese el numero de pisos de la biblioteca: ";
            cin >> numpisos;
            int numestantes;
            cout << "Ingrese el numero de estantes de la biblioteca: ";
            cin >> numestantes;
            int numsecciones;
            cout << "Ingrese el numero de secciones de la biblioteca: ";
            cin >> numsecciones;
            Biblioteca b(nombre, ubicacion, numpisos, numestantes, numsecciones);
            
            cout << "Biblioteca creada con existo!" << endl;
            break; }
        case 2: {
            string nombre = "";
            cout << "Ingrese el nombre del libro: ";
            getline(cin, nombre);
            getline(cin, nombre);
            string autor = "";
            cout << "Ingrese el autor del libro: ";
            getline(cin, autor);
            int ano;
            cout << "Ingrese el ano del libro: ";
            cin >> ano;

            for (int i = 0; i < lista_bibliotecas; i++){
                cout << i << "." << lista_bibliotecas[i] << endl;
            } // Fin For    

            cout << "Libro agregado con existo!" << endl;
            break; }
        case 3: {
            break; }
        case 4: {
            break; }
        case 5: {
            break; }
        case 6: {
            // Aqui va la Salida
            respuesta = 'n';
            break; }
        default:
            cout << "¡Entrada no valida!";
        } // Fin Switch
    } // Fin While Respuesta
} // Fin Main
