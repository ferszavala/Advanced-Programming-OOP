#include<string>

using namespace std;
class Rectangulo
{
    private:
        double largo, ancho;
        double arreglo[10];
    public:
        Rectangulo();
        Rectangulo(double, double);
        double perimetro(double, double);
        double area(double, double);
        void setLargo(double largo);
        void setAncho(double ancho);
        double getLargo();
        double getAncho();
        ~Rectangulo(); 
};