#include <string>
#include "Catalogo.hpp"
using namespace std;
class Biblioteca {
    string nombre, ubicacion;
    Catalogo****bibliotecas;
public:
    Biblioteca() {
    } // Fin Constructor Biblioteca
    Biblioteca(string nomb, string ubic, int npisos, int nestantes, int nsecciones) {
        nombre = nomb;
        ubicacion = ubic;
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
    void agregarLibro(string titulo, string autor, int ano, int npisos, int nestantes, int nsecciones) {
        bibliotecas[npisos][nestantes][nsecciones]->setLibro(titulo, autor, ano);
    } // Agregar Libro
    /*Catalogo BuscarLibros(int npisos, int nestantes, int nsecciones) {
        return bibliotecas[npisos][nestantes][nsecciones];
    } // Agregar Libro*/
    ~Biblioteca() {

    } // Fin Destructor Biblioteca
    string toString() {
        return "" + nombre;
    } // Fin To String
}; // Fin Class Biblioteca 