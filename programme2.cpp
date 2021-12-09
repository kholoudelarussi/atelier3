#include <iostream>
using namespace std;
class Shape //declaration du class
{
protected:
    float x, y; //les atrributs
public:
    Shape(float l, float h)//contructeur qui stock les valeurs des attribus
    {
        x = l;
        y = h;
    }
};
class Rectangle: public Shape// declaration de sous class qui herite de class shape
{
public:
    Rectangle(float l, float h) : Shape(l, h) {} // constructeur qui prend ses parametre de la class mere
    float area()// fonction qui calcul la surface.
    {
        return (x * y);
    }
};
class Triangle: public Shape// deuxieme class qui herite de class shape
{
public:

public:
    Triangle(float l, float h) : Shape(l, h) {}//constructeur
    float area()
    {
        return (x * y / 2);
    }
};
int main (){
    Rectangle rectangle(5,5); //declaration de deux objets
    Triangle triangle(4,4);
    cout << rectangle.area() << endl;// l'appel des deux fonction pour afficher le resultat
    cout << triangle.area() << endl;
    return 0;
}
