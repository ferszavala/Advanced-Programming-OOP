//Herencia

#include<iostream>
#include<string>

using namespace std;

//clase padre
class Persona
{
    private:
        string nombre;
        int edad;
    public:
        Persona();//constructor vacio
        Persona(string, int);//constructor con atributos
        void mostrarPersona();//metodo de mostrarPersona

};

class Alumno : public Persona{ //clase hija Alumno que hereda de Persona
    private:
       string Id;
       float notaFinal;
    public:
        Alumno();//constrctor vacio
        Alumno(string,int,string,float);//constructor con atributos
        void mostrarAlumno();//metodo para mostrarAlumno
};

class AlumnoUP : public Alumno{//clase hija AlumnoUP que hereda de Alumno que hereda de Persona
    private:
        string carrera;
    public:
        AlumnoUP();//constructor vacio
        AlumnoUP(string _carrera,string,int,string,float);//conctructor con atributos
        void mostrarAlumnoUP();//metodo de mostrarAlumnoUP
};

Alumno::Alumno(){

}

Persona::Persona(){
    
}

AlumnoUP::AlumnoUP(){
    
}

AlumnoUP::AlumnoUP(string _carrera,string _nombre,int _edad,string _Id,float _notaFinal) : Alumno(_nombre,_edad,_Id,_notaFinal){ //manda llamar los atributos que necesita de Alumno
    carrera = _carrera; //unicamente instancia la que es diferente de las clases padre
}

Alumno::Alumno(string _nombre,int _edad,string _Id,float _notaFinal) : Persona(_nombre,_edad){//manda llamar los atributos que necesita de la clase Persona
    Id= _Id; //unicamente instancia los datos que son unicos de esta clase
    notaFinal = _notaFinal;
}

Persona::Persona(string _nombre, int _edad){//esta no necesita mandar llamar ningun atributo de alguna otra clase porque es la clase padre
    nombre = _nombre;
    edad = _edad;
}

void Persona::mostrarPersona(){//unicamente muestra los atributos que le corresponden solo a su clase
    cout<<"Nombre: "<<nombre<<endl;
    cout<<"Edad: "<<edad<<endl;
}

void Alumno::mostrarAlumno(){//unicamente muestra los atributos que le corresponden solo a su clase
    mostrarPersona();//manda llamar la clase padre que necesita para los datos extra
    cout<<"Codigo Alumno: "<<Id<<endl;
    cout<<"Nota Final: "<<notaFinal<<endl;
}

void AlumnoUP::mostrarAlumnoUP(){//unicamente muestra los atributos que le corresponden solo a su clase
    mostrarPersona();//manda llamar la clase Padre y la clase "Abuelo" que necesita para los datos completos de la impresion en el main
    mostrarAlumno();//manda llamar la clase Padre que necesita para los datos extra
    cout<<"Carrera: "<<carrera<<endl;
}

int main(){
    AlumnoUP al1("IBE","Carlos",19,"012230",98.0);//crea un objeto del tipo de clase mas especifico(AlumnoUP) y le asigna datos por default
    
    al1.mostrarAlumnoUP();//manda llamar unicamente a la clase más especifica, ya que esta llama a las demas (padres) em forma de cadena

    Alumno a[10];//crea un arreglo de objetos de tipo alumno

    return 0;
}