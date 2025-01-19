#include <iostream>
class conceptos
{
protected:
    int datoProtegido{ 0 };
private:
    /Data/
    int dato{ 0 };
public:
    int datoPublico{ 0 };
    conceptos(/args/);
    conceptos(int dato);
    /**/
    conceptos(conceptos& copia);
    int leerDato();
    void escribirDato(int dato);
    ~conceptos();
};

conceptos::conceptos(/args/)
{
    this->dato = 0;
}

conceptos::conceptos(conceptos& copia)
{
    this->dato = copia.leerDato();
}
conceptos::conceptos(int valor) {
    this->dato = valor;
}
conceptos::~conceptos()
{
    std::cout << "Se eliminó la instancia\n";
}
int conceptos::leerDato()
{
    return this->dato;
}
void conceptos::escribirDato(int dato)
{
    this->dato = dato;
}

int main()
{
    conceptos a;
    std::cout << "a: "<< a.leerDato() << "\n";
    conceptos b(100);
    std::cout << "b: " << a.leerDato() << "\n";
    conceptos c(b);
    std::cout << "c: " << a.leerDato() << "\n";
    conceptos conceptos(20);
    std::cout << "conceptos: " << a.leerDato() << "\n";
    return 0;
}