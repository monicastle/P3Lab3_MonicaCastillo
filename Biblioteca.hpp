#include <string>
class Biblioteca {
    string nombre, ubicacion;
public:
    Biblioteca(string nomb = "", string ubic = "")
        : nombre(nomb), ubicacion(ubic) {}
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
}; // Fin Class Biblioteca 