#ifndef CATALOGO_H
#define CATALOGO_H
#include "Libro.hpp"
#include <string>
#include <vector>
class Catalogo {
    vector<Libro> lista_libros;
public:
    Catalogo() {
    } // Fin Constructor Catalogo
    Catalogo(int tamaño){  

    } // Fin Constructor Catalogo
    Libro getLibro(int posicion) const {
        return lista_libros[posicion];
    } // Fin Get Libro
    void setLibro(string titulo, string autor, string ano) {
        lista_libros.push_back(new Libro(titlo, autor, ano));
    } // Fin Set Libro
    ~Catalogo(){  
    } // Fin Destructor Catalogo
}; // Fin Class Catalogo
#endif