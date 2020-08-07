#include <iostream>
#include <string>
//#include "Biblioteca.hpp"
//#include "Catalogo.hpp"
//#include "Libro.hpp"
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
        switch (opcion){  
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
            cout << "Biblioteca creada con existo!" << endl;                 
            break; }
        case 2: {
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
