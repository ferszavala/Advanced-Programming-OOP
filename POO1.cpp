//clases

#include<iostream>
#include<string.h>
#include<string>
using namespace std;
class Persona
{
    private:
        string nombre;
        int edad;
    public:
        Persona(int, string);
        void comer();
        void leer();
}; //cuando se declara la clase y el prototipo siempre terminar con ; 

//Constructor
Persona::Persona(int _edad, string _nombre)
{
    edad = _edad;
    nombre = _nombre;
}

//Comer
void Persona::comer()
{
    cout<<"Soy "<<nombre<<" comiendo y tengo "<<edad<<endl;
}

//Leer
void Persona::leer()
{
    cout<<"Soy "<<nombre<<" leyendo y tengo "<<edad<<endl;
}

int main()
{
    Persona p1 = Persona(30, "Franz Rivera");
    Persona p2 = Persona(19, "Sara ");
    Persona p3 = Persona(19, "Sofia");
    Persona p4 = Persona(19, "Fer");

    p2.comer();
    p2.comer();

    p4.comer();
    p4.comer();

    p1.comer();
    p1.leer();
    return 0;
}

