#include <string>
#include <vector>
using namespace std;
#include "Libro.hpp"
class Catalogo {
    vector<Libro*> libros;
public:
    Catalogo() {
    } // Fin Constructor Catalogo
    vector<Libro*> getLibro() {
        return libros;
    } // Fin Get Libro
    void setLibro(string titulo, string autor, int ano) {
        libros.push_back(new Libro(titulo, autor, ano));
    } // Fin Set Libro
    ~Catalogo() {
    } // Fin Destructor Catalogo
    string toString() {
        string acum = "";
        for (int i = 0; i < libros.size(); i++) {
            acum += libros[i]->toString() + " ";
        } // Fin For     
        return "" + acum;
    } // Fin To String
}; // Fin Class Catalogo