#include <iostream>
#include "calculs.hpp"

using namespace std;

int main() {
    int x = 5;
    int y = 3;

    cout << "Addition : " << addition(x, y) << endl;
    cout << "Multiplication : " << multiplication(x, y) << endl;
    cout << "Soustraction : " << soustraction(x, y) << endl;
    cout << "Division : " << division(x, y) << endl;
    cout << "Racine carrée de " << x << " : " << racineCarree(x) << endl;
    cout << "Carré de " << x << " : " << Carre(x) << endl;

    return 0;
}