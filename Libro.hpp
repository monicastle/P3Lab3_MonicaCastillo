#include <string>
class Libro {
    string titulo, autor;
    int año;
public:
    Libro(string titulo_l, string autor_l = "", int año_l = 0)
        : titulo(titulo_l), autor(autor_l), año(año_l) {}
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
    string getAño() const {
        return año;
    } // Fin Get Año
    void setAño(int año_l) {
        año = año_l;
    } // Fin Set Año
}; // Fin Class Libro