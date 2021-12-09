#include <iostream>

using namespace std;

class media{//declaration du classe media
public:
    string titre;

    string id(string i){
        titre=i;
        return titre;
    }

    virtual void imprimmer(){
        cout<<"id de la classe media est :"<<titre<<endl;}};



class audio:public media{//declaration du sous classe audio
public:
    int duree;
    int get_duree(int d){
        duree=d;
        return d;}

    void imprimmer(){

        media::imprimmer();
        cout<<"le duration de audio est "<<duree<<"seconde"<<endl;}};




class livre:public media{
public:

    string name;
    string get_name(string n){
        name=n;
        return n;}

    void imprimmer(){

        media::imprimmer();
        cout<<"le nom du livre  est "<<name<<endl;}};




class press:public media{
public:

    string name1;
    string get_name1(string np){
        name1=np;
        return np;}

    void imprimmer(){

        media::imprimmer();
        cout<<"le nom du press  est "<<name1<<endl; }};




class journal: public press{
public :
    string name_j;
    string get_namej(string nj){
        name_j=nj;
        return nj;}

    void imprimmer(){

        press::imprimmer();
        cout<<"le journal est "<<name_j<<endl; }};


class magasine: public press{
public :
    string name_m;
    string get_namem(string nm){
        name_m=nm;
        return nm;}

    void imprimmer(){

        press::imprimmer();
        cout<<"la magasine est "<<name_m<<endl; }};



class revue: public press{
public :
    int temp;
    int get_temp(int t){
        temp=t;
        return t;}

    void imprimmer(){

        press::imprimmer();
        cout<<"le temps est : "<<temp<<endl; }

};


class disc: public audio{
public :

    string titre_m;
    string get_titre(string ti){
        titre_m=ti;
        return ti;}

    void imprimmer(){

        audio::imprimmer();
        cout<<"letitre du disc est : "<<titre_m<<endl; }

};


class cd: public audio{
public :
    int poid;
    int get_poid(int p){
        poid=p;
        return p;}

    void imprimmer(){

        audio::imprimmer();
        cout<<"le poid de cd est  : "<<poid<<"g"<<endl; }};

class cassette: public audio{
public :
    string titre_2;
    string get_titre2(string t2){
        titre_2=t2;
        return t2;}

    void imprimmer(){

        audio::imprimmer();
        cout<<"le titre de casette est   : "<<titre_2<<endl; }};







int main()
{

    media m1;
    m1.id("1234");
    m1.imprimmer();


    audio o1;
    o1.id("5678");
    o1.get_duree(43);
    o1.imprimmer();


    livre l1;
    l1.id("1212");
    l1.get_name("heal me");
    l1.imprimmer();


    press p1;
    p1.id("d1526");
    p1.get_name1("art");
    p1.imprimmer();



    cd c1;
    c1.id("sony77");
    c1.get_poid(2);
    c1.get_duree(28);
    c1.imprimmer();

    cassette cc1;
    cc1.id("ee6235");
    cc1.get_titre2("music");
    cc1.get_duree(12);
    cc1.imprimmer();

    return 0;}

