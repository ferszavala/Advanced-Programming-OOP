//Herencia

#include<iostream>
#include<string>
using namespace std;

class Persona
{
    private:
        string nombre;
        int edad;
    public:
        Persona();//constructor vacio
        Persona(string, int);//constructor con datos(atributos)
        void mostrarPersona();//metodo de mostrar persona
};

//Herencia de la clase Persona a la clase Alumno
class Alumno : public Persona
{
    private:
        string ID;
        float notaFinal;
    public:
        Alumno();
        Alumno(string, int, string, float);
        void mostrarAlumno();
};
//constructores vacios
Alumno::Alumno()
{

}

Persona::Persona()
{

}

//constructor con datos
Alumno::Alumno(string _nombre, int _edad, string _ID, float _notaFinal) : Persona(_nombre ,_edad)//recordar mandar llamar los de la clase de Persona que necesitemos para la clase Alumnos
{
    ID = _ID;
    notaFinal = _notaFinal;
}
//constructor con datos
Persona :: Persona(string _nombre, int _edad)
{
    nombre = _nombre;
    edad = _edad;
}

//jala los datos del main cuando manda llamar el metodo de mostrarAlumno, el metodo anterior manda llamar mostrarPersona y los imprime (efecto cadena)
void Persona::mostrarPersona()
{
    cout<<"Nombre: "<<nombre<<endl;
    cout<<"Edad: "<<edad<<endl;
}

//jala los datos del main cuando manda llamar el metodo y los imprime
void Alumno::mostrarAlumno()
{
    mostrarPersona();
    cout<<"Codigo Alumno: "<<ID<<endl;
    cout<<"Nota final: "<<notaFinal<<endl;
}

int main()
{
    Alumno al1("Carlos",19,"0227729",98.3);//crea el objeto alumno y le da valores
    al1.mostrarAlumno();//manda llamar el metodo mostrarAlumno()

    Alumno a[10];//Crea un arreglo de objetos de tipo alumno

    return 0;
}