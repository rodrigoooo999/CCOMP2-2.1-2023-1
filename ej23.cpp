#include <iostream>
using namespace std;

int main() {
int num1, num2, num3, num4, num5, grande, chico;

cout << "Ingresa 5 numeros: ";
cin >> num1 >> num2 >> num3 >> num4 >> num5;

grande = num1;
chico = num1;

if ( num1 > grande )
grande = num1;
if ( num2 > grande )
grande = num2;
if ( num3 > grande )
grande = num3;
if ( num4 > grande )
grande = num4;
if ( num5 > grande )
grande = num5;
if ( num1 < chico )
chico = num1;
if ( num2 < chico )
chico = num2;
if ( num3 < chico )
chico = num3;
if ( num4 < chico )
chico = num4;
if ( num5 < chico )
 chico = num5;

cout << "el mas grande es " << grande; 
cout << "el mas chico es " << chico; 

}