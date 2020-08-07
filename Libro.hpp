#ifndef LIBRO_H
#define LIBRO_H
#include <string>
class Libro {
    string titulo, autor;
    int ano;
public:
    Libro{
    } // Fin Constructor Libro
    Libro(string titulo_l = "", string autor_l = "", int ano_l = 0) {
        titulo = titulo_l;
        autor = autor_l;
        ano = ano_l;
    } // Fin Constructor Libro
    string getTitulo() const {
        return titulo;
    } // Fin Get Nombre
    void setTitulo(string titulo_l) {
        titulo = titulo_l;
    } // Fin Set Nombre
    string getAutor() const {
        return autor;
    } // Fin Get Ubicacion
    void setAutor(string autor_l) {
        autor = autor_l;
    } // Fin Set Ubicacion
    string getAno() const {
        return ano;
    } // Fin Get Año
    void setAno(int ano_l) {
        ano = ano_l;
    } // Fin Set Año
    ~Libro(){
    } // Fin Destructor Libro
}; // Fin Class Libro
#endif