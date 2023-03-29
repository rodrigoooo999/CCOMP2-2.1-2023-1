#include <iostream>
using namespace std; 

int main() {
    int num1, num2, suma;
    cout << "ingrese dos numeros";
    cin >> num1 >> num2;
    suma = num1 + num2;
    if (num1%2 == 0)
        cout << "El primer numero es par";
    else 
        cout << "El primer numero es impar";
    if (num2%2 == 0)
        cout << "El segundo numero es par";
    else 
        cout << "El segundo numero es impar";
    if  (suma%2 == 0)
        cout << "La suma de los dos numers es par";  
    else 
        cout << "La suma es impar";    
        
            
        

}
