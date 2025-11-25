/**************************************************************
                        Prog.cpp
**************************************************************/
#include <iostream>
using namespace std;
#define A 5   // macro remplacée au prétraitement
int main() {
    int b = 2;
int c = A + b;
    cout << "Valeur de A : " << A << endl;
    cout << "Valeur de b : " << b << endl;
    cout << "La somme de " << A << " + " << b << " = " << c << endl;
return 0; }