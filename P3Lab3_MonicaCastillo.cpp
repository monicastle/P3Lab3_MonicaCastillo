#include <iostream>
#include <string>
#include <vector>
#include "Biblioteca.hpp"
using namespace std;
int main() {
    char respuesta = 's';
    vector<Biblioteca> bibliotecas;
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
                cout << "El numero ingresado no es valido!";
                cout << "Ingrese el numero de pisos de la biblioteca: ";
                cin >> numpisos;
            } // Fin While Validacion  
            int numestantes;
            cout << "Ingrese el numero de estantes de la biblioteca: ";
            cin >> numestantes;
            while (numestantes <= 0) {
                cout << "El numero ingresado no es valido!";
                cout << "Ingrese el numero de estantes de la biblioteca: ";
                cin >> numestantes;
            } // Fin While Validacion  
            int numsecciones;
            cout << "Ingrese el numero de secciones de la biblioteca: ";
            cin >> numsecciones;
            while (numsecciones <= 0) {
                cout << "El numero ingresado no es valido!";
                cout << "Ingrese el numero de secciones de la biblioteca: ";
                cin >> numsecciones;
            } // Fin While Validacion  
            Biblioteca biblioteca(nombre, ubicacion, numpisos, numestantes, numsecciones);
            bibliotecas.push_back(biblioteca);
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
                cout << i << ". " << bibliotecas[i].getNombre() << endl;
            } // Fin For   
            int pos = 0;
            cout << "Ingrese la posicion de la biblioteca a la que desea agregar un libro: ";
            cin >> pos;
            // Agregar Libro a una Biblioteca
            while (pos > bibliotecas.size() - 1 || pos < 0) {
                cout << "La posicion ingresada no es valida!";
                cout << "Ingrese la posicion de la biblioteca a la que desea agregar un libro: ";
                cin >> pos;
            } // Fin While Validacion   
            int numpiso;
            cout << "Ingrese el numero de piso: ";
            cin >> numpiso;

            int numestante;
            cout << "Ingrese el numero de estante: ";
            cin >> numestante;

            int numseccion;
            cout << "Ingrese el numero de seccion: ";
            cin >> numseccion;

            bibliotecas[pos].agregarLibro(nombre, autor, ano, numpiso, numestante, numseccion);
            cout << "Libro agregado con existo!" << endl;
            break; }
        case 3: {
            string titulo = "";
            cout << "Ingrese el titulo a buscar: ";
            getline(cin, titulo);
            getline(cin, titulo);

            break; }
        case 4: {
            string titulo = "";
            cout << "Ingrese el titulo a buscar: ";
            getline(cin, titulo);
            getline(cin, titulo);

            break; }
        case 5: {
            // Imprimir Bibliotecas
            cout << "Bibliotecas: " << endl;
            for (int i = 0; i < bibliotecas.size(); i++) {
                cout << i << ". " << bibliotecas[i].getNombre() << endl;
            } // Fin For  
            int pos = 0;
            cout << "Ingrese la posicion de la biblioteca que desea explorar: ";
            cin >> pos;
            int numpiso;
            cout << "Ingrese el numero de piso: ";
            cin >> numpiso;

            int numestante;
            cout << "Ingrese el numero de estante: ";
            cin >> numestante;

            int numseccion;
            cout << "Ingrese el numero de seccion: ";
            cin >> numseccion;
            //bibliotecas[pos].BuscarLibros(numpiso, numestante, numseccion).toString;
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
