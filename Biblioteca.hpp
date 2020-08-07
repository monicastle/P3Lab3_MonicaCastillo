#ifndef BIBLIOTECA_H
#define BIBLIOTECA_H
#include <string>
#include <vector>
#include "Catalago.hpp"
class Biblioteca {
    string nombre, ubicacion;
    Catalogo*** bibliotecas;
public:
    Biblioteca() {
    } // Fin Constructor Biblioteca
    Biblioteca(string nomb = "", string ubic = "", int npisos = 0, int nestantes = 0, int nsecciones = 0) {
        nombre = nomb;
        ubicacion = ubic;
        bibliotecas = new Catalago ***[npisos];
        for (int i = 0; i < npisos; i++) {
            bibliotecas[i] = new Catalago**[nestantes];
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
        ubicacion = ubc;
    } // Fin Set Ubicacion
    ~Biblioteca() {

    } // Fin Destructor Biblioteca
    string toString() {
        return "" + nombre;
    } // Fin To String
}; // Fin Class Biblioteca 
#endif