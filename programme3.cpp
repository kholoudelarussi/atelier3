#include <iostream>
#include <cmath>

using namespace std;

class complexe {//declaration du classe

public:
    double re;// declaration  du class avec deux attributs
    double img;
public:
    complexe(double r = 0, double i = 0) //constructeur
    {
        re = r;
        img = i;
    }
    void afficher()
    {
        cout << re;

        //Pour ne pas afficher 5 + -2i (si img est negatif)
        if (img >= 0)
            cout << " + ";

        cout << img << "i" << endl;
    }
    //Opérateur : complexe = complexe
    bool egal(const complexe & r) {
        return (re == r.re && img == r.img);
    }
    //Opérateur : complexe + complexe
    complexe operator+(complexe r)
    {
        complexe s;
        s.re = re + r.re;
        s.img = img + r.img;
        return s;
    }



    //Opérateur : complexe - complexe
    complexe operator-(complexe r)
    {
        complexe s;
        s.re = re - r.re;
        s.img = img - r.img;
        return s;
    }

    //Opérateur : complexe * complexe
    complexe operator*(complexe r)
    {
        complexe p;
        p.re = re * r.re - img * r.img;
        p.img = re * r.img + img * r.re;
        return p;
    }

    //Opérateur : complexe / complexe
    complexe operator/(complexe r)
    {
        complexe s;
        s.re = re / r.re;
        s.img = img / r.img;
        return s;
    }
};


int main(){
    double re;
    double img;
    complexe c1;

    complexe a(5,2),b(2,8),c;
    cout << "  a = ";
    a.afficher();
    cout << "la partie reel de  a = "<< a.re<<endl;
    cout << "la partie imaginaire de  a = "<< a.img<<endl;

    cout << "b = ";
    b.afficher();
    cout << "la partie reel de  b = "<< b.re<<endl;
    cout << "la partie imaginaire de  b = "<< b.img<<endl;
    if(a.egal(b))
        cout << "les nombres complexes a et b sont egaux " << endl;
    else
        cout << "les nombres complexes a et b ne sont pas egaux" << endl;
    cout << "a + b = ";
    c = (a + b);
    c.afficher();

    cout << "a - b = ";
    c = (a - b);
    c.afficher();

    cout << "a * b = ";
    c = (a * b);
    c.afficher();

    cout << "a / b = ";
    c = (a / b);
    c.afficher();
    return 0;
}

