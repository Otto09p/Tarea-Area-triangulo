#include <iostream>



using namespace std;

int main (){

float base;   // Se configura la base como flotante
float altura; // Se configura la altura como flotante
float resultado;


cout <<"Calcule el area de un triangulo";


cout <<"\nDigite la altura: ";
cin >>altura;
cout <<"Digite la base del triangulo: ";
cin >>base;
resultado= (base*altura)/2; 
cout <<"El area del triangulo es: "<<resultado;

return 0;

}


