#include<iostream>

using namespace std;

class Punto
{
    private: 
        int x, y;
    public:
        Punto();
        Punto(int , int);
        int getX();
        int getY();
        void setPunto(int, int);
};

Punto::Punto()
{
 //el constructor vacío sirve para el arreglo de objetos
}

Punto::Punto(int _x, int _y)
{
    x = _x;
    y = _y;
}

int Punto::getX()
{
    return x;
}

int Punto::getY()
{
    return y;
}

void Punto::setPunto(int _x, int _y)
{
    x = _x;
    y = _y;
}

int main()
{
    Punto p1;
    Punto p[10];
    p1.setPunto(14,20);
    cout<<p1.getX()<<endl;
    cout<<p1.getY()<<endl;
    return 0;
}