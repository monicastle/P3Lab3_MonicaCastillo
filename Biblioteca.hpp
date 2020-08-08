#include <string>
#include "Catalogo.hpp"
using namespace std;
class Biblioteca {
    string nombre, ubicacion;
    int pisos, estantes, secciones;
    Catalogo****bibliotecas;
public:
    Biblioteca() {
    } // Fin Constructor Biblioteca
    Biblioteca(string nomb, string ubic, int npisos, int nestantes, int nsecciones) {
        nombre = nomb;
        ubicacion = ubic;
        pisos = npisos;
        estantes = nestantes;
        secciones = nsecciones;
        bibliotecas = new Catalogo ***[npisos];
        for (int i = 0; i < npisos; i++) {
            bibliotecas[i] = new Catalogo**[nestantes];
            for (int j = 0; j < nestantes; j++) {
                bibliotecas[i][j] = new Catalogo*[nsecciones];
                for (int k = 0; k < nsecciones; k++) {
                    bibliotecas[i][j][k] = new Catalogo();
                } // Fin For 
            } // Fin For          
        } // Fin For 
    } // Fin Constructor Biblioteca
    string getNombre() const {
        return nombre;
    } // Fin Get Nombre
    void setNombre(string nomb) {
        nombre = nomb;
    } // Fin Set Nombre
    string getUbicacion() const {
        return ubicacion;
    } // Fin Get Ubicacion
    void setUbicacion(string ubic) {
        ubicacion = ubic;
    } // Fin Set Ubicacion
    int getPisos() const {
        return pisos;
    } // Fin Get Ubicacion
    int getEstantes() const {
        return estantes;
    } // Fin Get Ubicacion
    int getSecciones() const {
        return secciones;
    } // Fin Get Ubicacion
    void agregarLibro(string titulo, string autor, int ano, int npisos, int nestantes, int nsecciones) {
        bibliotecas[npisos][nestantes][nsecciones]->setLibro(titulo, autor, ano);
    } // Fin Agregar Libro   
    void buscarLibroTitulo(string titulo_l) {
        bool valid = false;
        for (int i = 0; i < pisos; i++) {
            for (int j = 0; j < estantes; j++) {
                for (int k = 0; k < secciones; k++) {
                    vector<Libro*> libros = bibliotecas[i][j][k]->getLibro();
                    for (int l = 0; l < libros.size(); l++) {
                        if (libros[l]->getTitulo() == titulo_l) {
                            cout << "Titulo: " << libros[l]->getTitulo() << endl;
                            cout << "Autor: " << libros[l]->getAutor() << endl;
                            cout << "Ano: " << libros[l]->getAno() << endl;
                            cout << "Biblioteca: " << nombre << endl;
                            cout << "Ubicado en el piso " << i << " del estante " << j << " de la seccion " << k << endl;
                            cout << endl;
                            valid = true;
                        } // Fin If
                    } // Fin For
                } // Fin For
            } // Fin For
        } // Fin For
        if (valid == false) {
            cout << "No se ha encontrado ningun libro con este nombre" << endl;
        } // Fin If
    } // Fin Buscar Libro Titulo
    void buscarLibroAutor(string autor_l) {
        bool valid = false;
        for (int i = 0; i < pisos; i++) {
            for (int j = 0; j < estantes; j++) {
                for (int k = 0; k < secciones; k++) {
                    vector<Libro*> libros = bibliotecas[i][j][k]->getLibro();
                    for (int l = 0; l < libros.size(); l++) {
                        if (libros[l]->getAutor() == autor_l) {
                            cout << "Titulo: " << libros[l]->getTitulo() << endl;
                            cout << "Autor: " << libros[l]->getAutor() << endl;
                            cout << "Ano: " << libros[l]->getAno() << endl;
                            cout << "Biblioteca: " << nombre << endl;
                            cout << "Ubicado en el piso " << i << " del estante " << j << " de la seccion " << k << endl;
                            cout << endl;
                            valid = true;
                        } // Fin If
                    } // Fin For
                } // Fin For
            } // Fin For
        } // Fin For
        if (valid == false) {
            cout << "No se ha encontrado ningun libro escrito por este autor" << endl;
        } // Fin If
    } // Fin Buscar Libro Autor
    ~Biblioteca() {
        for (int i = 0; i < pisos; i++) {
            for (int j = 0; j < estantes; j++) {
                for (int k = 0; k < secciones; k++) {
                    delete bibliotecas[i][j][k];
                } // Fin For              
            } // Fin For         
        } // Fin For
        for (int i = 0; i < pisos; i++) {
            for (int j = 0; j < estantes; j++) {
                delete[] bibliotecas[i][j];
            } // Fin For     
        } // Fin For
        for (int i = 0; i < pisos; i++) {
            delete[] bibliotecas[i];
        } // Fin For
        delete[] bibliotecas;
    } // Fin Destructor Biblioteca
    string toString() {
        return "" + nombre;
    } // Fin To String
}; // Fin Class Biblioteca 