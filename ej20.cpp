#include <iostream>
using namespace std;

int main() {
    int radio;
    int diametro;
    int area;
    int perim;
    cout << "ingrese el radio " ;
    cin >> radio;
    diametro = 2*radio;
    cout << " el diametro es " << diametro; 
    area = 3.14159* radio*radio; 
    cout << " el area es " << area;
    perim = 2*3.14159*radio;
    cout << " el perimetro es " << perim; 

}