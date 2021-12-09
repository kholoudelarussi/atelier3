#include <iostream>
#include <cstring>
using namespace std;

class Animal //declaration de la fonction Animal
{//les attribus et les fonctions de cette classe
protected:
    int age ;
    string nom;

public:
    void set_value (int a, string n)
    {
        age = a;
        nom=n;
    }

};

class Zebra:public Animal// sous class zebra
{public:

    void message_zebra()// fonction pour afficher les information de zebra
    {cout<< "le nom de ce zebra est "<< nom<<" il est "<< age << "ans . ce zebra est d'origine africain. \n";}
};

class Dolphin: public Animal //declaration du sous class doplhine
{public:

    void message_dolphin() // fonction pour afficher les information de dolphine
    {cout<< "le nom de  dolphin est "<< nom<< " il est "<<age << "ans. ce dolphin est d'origine americain.\n";}
};


int main ()
{
    Zebra zebra;
    Dolphin dolphin;
    string zou;
    string dou;

    zebra.set_value (10,"zou");
    dolphin.set_value (6,"dou");

    zebra.message_zebra() ;
    dolphin.message_dolphin() ;

    return 0;
}

