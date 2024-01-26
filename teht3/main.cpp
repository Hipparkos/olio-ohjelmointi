#include <iostream>
using namespace std;

class Chef
{
public:
    Chef(string);
    ~Chef();
    void makeSalad();
    void makeSoup();

protected:
    string name;
};



class ItalianChef : public Chef
{
public:
    ItalianChef(string, int, int);
    ~ItalianChef();
    string getName();
    void makePasta();

private:
    int vesi;
    int jauho;
};

Chef::Chef(string n){
    name = n;
    cout << "Chef " << name << " konstruktori" << endl;
}

Chef::~Chef(){
    cout << "Chef " << name << " destruktori" << endl;
}

void Chef::makeSalad(){
    cout << "Chef " << name << " makes salad" << endl;
}

void Chef::makeSoup(){
    cout << "Chef " << name << " makes soup" << endl;
}

ItalianChef::ItalianChef(string n, int v, int j) : Chef(n){
    cout << "Chef " << name << " konstruktori" << endl;
    vesi = v;
    jauho = j;
}

ItalianChef::~ItalianChef(){
    cout << "Chef " << name << " destruktori" << endl;
}

string ItalianChef::getName(){
    return name;
}

void ItalianChef::makePasta(){
    cout << "Chef " << name << " makes pasta with special recipe and uses " << jauho << " g of flour and " << vesi << " ml of water" << endl;
}

int main(){
    Chef gordon("Gordon Ramsay");
    gordon.makeSalad();
    gordon.makeSoup();

    ItalianChef anthony("Anthony Bourdain", 250, 100);
    anthony.makeSalad();
    anthony.makeSoup();
    anthony.makePasta();

    return 0;
}
