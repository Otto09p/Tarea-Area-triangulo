#include <iostream>



using namespace std;

int main (){

float base;   // Se configura la base como flotante
float altura; // Se configura la altura como flotante
float resultado;


cout <<"Calcule el area de un triangulo";// Se imprime el mensaje inicial hacia el usuario


cout <<"\nDigite la altura: "; // El usuario digita la altura
cin >>altura;
cout <<"Digite la base del triangulo: "; //El usuario digita la base
cin >>base;
resultado= (base*altura)/2; // Se imprime la formula del área
cout <<"El area del triangulo es: "<<resultado;

return 0;

}


