#include <iostream>
using namespace std;

// Déclaration (Prototype de ma fonction)
float addition(float a, float b);
float soustraction(float a, float b);   

int main() { 
    cout << "Programme" << endl;
    float a =100;
    cout << "La valeur de a est : " << a << endl;
    float x_soustraction = soustraction(10, 5); 
    float x_addition = addition(10, 5);
    float x = (float)addition(11, 5)/soustraction(11, 5);

    cout << "Le résultat est : " << x_addition << endl;
    cout << "Le résultat de la soustraction est : " << x_soustraction << endl;
    cout << "Le résultat de la division est : " << x << endl;
    return 0;
}

// Définition de ma fonction addition
float addition(float a, float b) {
    a = 20;
    return a + b;
}

// Définition de ma fonction soustraction
float soustraction(float a, float b) {
    return a - b;
}
