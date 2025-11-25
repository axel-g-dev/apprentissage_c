#include "calculs.hpp" 
#include <cmath>

float addition(int a, int b) {
    return a + b;
}

float multiplication(int a, int b) {
    return a * b;
}

float soustraction(int a, int b) {
    return a - b;
}

float division(int a, int b) {
    if (b != 0) {
        return a / b;
    } else {
        
        return 0; 
    }
}

float racineCarree(float a) {
    if (a >= 0) {
        return sqrt(a);
    } else {
        
        return -1.0f; 
    }
}

int Carre(int a) {
    return a * a;
}

// Normalement tout est correct ici.