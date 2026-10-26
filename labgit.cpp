#include<iostream>
#include<fstream>
#include<sstream>

using namespace std;
int main () {
    ifstream archivoEntrada ("input/archivoEntrada.txt");
    ofstream archivoSalida ("output/archivoSalida.txt");

    if (archivoEntrada.is_open() && archivoSalida.is_open()) {
        cout<<"archivo abierto"<<endl;
        string linea;
        while (getline (archivoEntrada, linea)) {
            archivoSalida << linea << endl;
        }
        cout<<"Archivo copiado correctamente"<<endl;
    }
}
