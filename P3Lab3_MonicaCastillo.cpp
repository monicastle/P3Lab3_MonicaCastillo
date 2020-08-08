#include <iostream>
#include <string>
#include <vector>
#include "Biblioteca.hpp"
using namespace std;
int main() {
    char respuesta = 's';
    vector<Biblioteca*> bibliotecas;
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
            while (numpisos <= 0) {
                cout << "El numero ingresado no es valido!" << endl;
                cout << "Ingrese el numero de pisos de la biblioteca: ";
                cin >> numpisos;
            } // Fin While Validacion  
            int numestantes;
            cout << "Ingrese el numero de estantes de la biblioteca: ";
            cin >> numestantes;
            while (numestantes <= 0) {
                cout << "El numero ingresado no es valido!" << endl;
                cout << "Ingrese el numero de estantes de la biblioteca: ";
                cin >> numestantes;
            } // Fin While Validacion  
            int numsecciones;
            cout << "Ingrese el numero de secciones de la biblioteca: ";
            cin >> numsecciones;
            while (numsecciones <= 0) {
                cout << "El numero ingresado no es valido!" << endl;
                cout << "Ingrese el numero de secciones de la biblioteca: ";
                cin >> numsecciones;
            } // Fin While Validacion  
            bibliotecas.push_back(new Biblioteca(nombre, ubicacion, numpisos, numestantes, numsecciones));
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
            // Imprimir Bibliotecas
            cout << "Bibliotecas: " << endl;
            for (int i = 0; i < bibliotecas.size(); i++) {
                cout << i << ". " << bibliotecas[i]->getNombre() << endl;
            } // Fin For   
            int pos = 0;
            cout << "Ingrese la posicion de la biblioteca a la que desea agregar un libro: ";
            cin >> pos;
            // Agregar Libro a una Biblioteca
            while (pos > bibliotecas.size() - 1 || pos < 0) {
                cout << "La posicion ingresada no es valida!" << endl;
                cout << "Ingrese la posicion de la biblioteca a la que desea agregar un libro: ";
                cin >> pos;
            } // Fin While Validacion   
            int numpiso;
            cout << "Ingrese el numero de piso: ";
            cin >> numpiso;
            while (numpiso > bibliotecas[pos]->getPisos() - 1 || numpiso < 0) {
                cout << "El numero ingresado no es valida!" << endl;
                cout << "Ingrese el numero de piso: ";
                cin >> numpiso;
            } // Fin While Validacion
            int numestante;
            cout << "Ingrese el numero de estante: ";
            cin >> numestante;
            while (numestante > bibliotecas[pos]->getEstantes() - 1 || numestante < 0) {
                cout << "El numero ingresado no es valida!" << endl;
                cout << "Ingrese el numero de estante: ";
                cin >> numestante;
            } // Fin While Validacion
            int numseccion;
            cout << "Ingrese el numero de seccion: ";
            cin >> numseccion;
            while (numseccion > bibliotecas[pos]->getSecciones() - 1 || numseccion < 0) {
                cout << "El numero ingresado no es valida!" << endl;
                cout << "Ingrese el numero de seccion: ";
                cin >> numseccion;
            } // Fin While Validacion
            bibliotecas[pos]->agregarLibro(nombre, autor, ano, numpiso, numestante, numseccion);
            cout << "Libro agregado con existo!" << endl;
            break; }
        case 3: {
            string titulo = "";
            cout << "Ingrese el titulo a buscar: ";
            getline(cin, titulo);
            getline(cin, titulo);
            for (int i = 0; i < bibliotecas.size(); i++) {
                bibliotecas[i]->buscarLibroTitulo(titulo);
            } // Fin For
            break; }
        case 4: {
            string autor = "";
            cout << "Ingrese el autor a buscar: ";
            getline(cin, autor);
            getline(cin, autor);
            for (int i = 0; i < bibliotecas.size(); i++) {
                bibliotecas[i]->buscarLibroAutor(autor);
            } // Fin For
            break; }
        case 5: {
            // Imprimir Bibliotecas
            cout << "Bibliotecas: " << endl;
            for (int i = 0; i < bibliotecas.size(); i++) {
                cout << i << ". " << bibliotecas[i]->getNombre() << endl;
            } // Fin For  
            int pos = 0;
            cout << "Ingrese la posicion de la biblioteca a explorar: ";
            cin >> pos;
            // Explorar una Biblioteca
            while (pos > bibliotecas.size() - 1 || pos < 0) {
                cout << "La posicion ingresada no es valida!" << endl;
                cout << "Ingrese la posicion de la biblioteca a explorar: ";
                cin >> pos;
            } // Fin While Validacion   
            int numpiso;
            cout << "Ingrese el numero de piso: ";
            cin >> numpiso;
            while (numpiso > bibliotecas[pos]->getPisos() - 1 || numpiso < 0) {
                cout << "El numero ingresado no es valida!" << endl;
                cout << "Ingrese el numero de piso: ";
                cin >> numpiso;
            } // Fin While Validacion
            int numestante;
            cout << "Ingrese el numero de estante: ";
            cin >> numestante;
            while (numestante > bibliotecas[pos]->getEstantes() - 1 || numestante < 0) {
                cout << "El numero ingresado no es valida!" << endl;
                cout << "Ingrese el numero de estante: ";
                cin >> numestante;
            } // Fin While Validacion
            int numseccion;
            cout << "Ingrese el numero de seccion: ";
            cin >> numseccion;
            while (numseccion > bibliotecas[pos]->getSecciones() - 1 || numseccion < 0) {
                cout << "El numero ingresado no es valida!" << endl;
                cout << "Ingrese el numero de seccion: ";
                cin >> numseccion;
            } // Fin While Validacion

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
