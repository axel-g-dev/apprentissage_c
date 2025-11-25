#include <iostream>
#include <cstdlib>   // std::atoi
using namespace std;
int main(int argc, char** argv) {
    if (argc != 3) {
        cerr << "Usage : " << argv[0] << " <int> <int>\n";
        return EXIT_FAILURE;
    }
    int a = std::atoi(argv[1]);
    int b = std::atoi(argv[2]);
    cout << "La somme de " << a << " et " << b
         << " vaut : " << a + b << endl;
    return EXIT_SUCCESS;
}