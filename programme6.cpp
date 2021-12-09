#include <iostream>
using namespace std;
class personne//declaration du classe personne
{
private:
    string nom;
    string prenom;
    string datenaissance;
public:
    personne(string n,string p,string d){//inisialisation des donnés par constructeur
        nom=n;
        prenom=p;
        datenaissance=d;
    }
    void afficher(){ //affichage des  informations
        cout<<"personne:"<<nom<<" "<<prenom<<" "<<datenaissance<<endl;
    }
};
class employe:public personne{//declaration de sous classe employe
private:
    string nom;
    string prenom;
    string datenaissance;
    double salaire;
public:
    employe(string n,string p,string d,double s): personne(n,p,d)
    {
        nom=n;
        prenom=p;
        datenaissance=d;
        salaire=s;
    }
    void afficher(){
        cout<<"employe:"<<nom<<" "<<prenom<<" "<<datenaissance<<" "<<salaire <<endl;
    }
};
class chef:public employe{//declaration de sous classe chef
private:
    string nom;
    string prenom;
    string datenaissance;
    double salaire;
    string service;
public:
    chef(string n,string p,string d,double s,string se): employe(n,p,d,s)
    {
        nom=n;
        prenom=p;
        datenaissance=d;
        salaire=s;
        service=se;
    }
    void afficher(){
        cout<<"chef:"<<nom<<" "<<prenom<<" "<<datenaissance<<" "<<salaire <<" "<<service<<endl;
    }
};
class directeur:public chef{//declaration de sous classe directeur
private:
    string nom;
    string prenom;
    string datenaissance;
    double salaire;
    string service;
    string societe;
public:
    directeur(string n,string p,string d,double s,string se,string so): chef(n,p,d,s,se)
    {
        nom=n;
        prenom=p;
        datenaissance=d;
        salaire=s;
        service=se;
        societe=so;
    }
    void afficher(){
        cout<<"directeur:"<<nom<<" "<<prenom<<" "<<datenaissance<<" "<<salaire <<" "<<service<<" "<<societe<<endl;
    }
};


int main()
{

    personne p1("houda","elmousen","09/10/1991");
    p1.afficher();
    employe e1("salma","mohali","12/05/1998",10000);
    e1.afficher();
    chef c1("mohamed","dohali","12/05/1990",25000,"informatique");
    c1.afficher();
    directeur d1("kholoud","elarusi","01/01/2001",40000,"informatique","infowithkholoud");
    d1.afficher();

}

