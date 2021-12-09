#include <iostream>
using namespace std;
class mere{// declaration de la classe mere
public:
    void display ()// la fonction display pour la classe mere
    {
        cout << "La classe mere ";
    }
};
class fille : public mere{// declaration de la sous classe fille
public:
    void display ()// meme fonction display
    {
        cout << "La classe fille";
    }
};
int main ()
{
    fille f; //creation un objet du class fille
    f.display();// l'appelle de la fonction display

    return 0;
}

