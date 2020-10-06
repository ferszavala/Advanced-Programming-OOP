/*Crear un programa en C++ que tenga la siguiente jerarquía de
clases: Animal(Clase Padre) (Edad) -> Humano(Clase Hija) (nombre) -> Perro(Clase Hija) (nombre y raza), 
y hacer polimorfismo con el metodo comer()*/

//Polimorfismo: función que se comporta diferente para una clase que para otra
#include<iostream>
#include<string>

using namespace std;

class Animal//se crea la clase Padre
{
    private:
        int edad;
    public:
        Animal();//se necesita con constructor vacio
        Animal(int);//creacion de constructor con atributos, no es necesario darle nombre, solo se escribe el tipo de dato
        int getEdad();//encapsulamiento del dato que se usa en la clase con un get
        void setEdad(int);//encapsulamiento del dato que se usa en la clase con un set
        virtual void comer(); //IMPORTANTE polimorfismo, SOLO VA EN LA CLASE PADRE COMO VIRTUAL
};

class Humano:public Animal //Herencia. Humano hereda de Animal
{
    private: 
        string nombre; //variables que se van a necesitar
    public: 
        Humano();//constructor vacio
        Humano(int, string);//constructor con atributos (no es necesario poner el nombre de las variables)
        void comer(); //metodo comer, puedo ponerle lo que desee (hereda con polimorfismo)
};

class Perro:public Animal//clase que hereda de Animal pero no de Humano (no hay Padre y Abuelo, solo padre y dos hijas)
{
    private:
        string nombre, raza;//variables que se van a usar en esta clase
    public:
        Perro();//constrcutor vacío
        Perro(int, string, string);//constructor con atributos (sin los nombres de las variables)
        void comer();//metodo comer, hereda con polimorfismo de la clase padre
};

Animal::Animal()//constructor vacio
{

}

Animal::Animal(int _edad)//no necesita llamar a otras clases con metodos porque es la clase Padre
{
    edad = _edad;
}

void Animal::comer()//se pone vacio el metodo que se vaya a aplicar con polimorfismo
{

}

Humano::Humano()//constructor vacio
{

}

Humano::Humano(int _edad, string _nombre) : Animal(_edad)//jala el atributo que necesita de la clase padre
{
    nombre = _nombre;
}

void Humano::comer()//metodo con polimorfismo aplicado en clase Humano
{
    cout<<"Yo como sentado en una mesa de restaurante"<<endl;//imprime lo que desamos al llamar este metodo en especifico
}

Perro::Perro()//constructor vacio
{

}

Perro::Perro(int _edad, string _nombre, string _raza):Animal(_edad)//manda llamar lo que necesita de la clase padre que es Animal(sin Humano)
{
    nombre = _nombre;
    raza = _raza;
}

void Perro::comer()//metodo heredado con polimorfismo para este metodo en especifico
{
    cout<<"Yo como en un plato en el suelo"<<endl;//lo que desamos que imprima especificamente
}

int main()
{
    Animal *animales[2];//arreglo de objetos tipo Animal
    animales[0] = new Humano(21, "Jorge"); //reserva memoria el new, en la posicion 0 lo manda llamar con el metodo que correspone a humano
    animales[1] = new Perro(4, "Fido", "Pastor alemán");//en la posicion 1 lo manda llamar con el metodo que corresponde a Perro
    animales[0]->comer();//el usar el "->" es lo mismo que poner "."
    animales[1]->comer();//el usar el "->" es lo mismo que poner "."

    return 0;
}

//no va a volver a llamar el comer() de animal, solo de humano y perro porque el virtual la hace abstracta
