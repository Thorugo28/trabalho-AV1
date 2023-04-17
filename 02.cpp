#include <iostream>

using namespace std;

int main(){

    //declarando as variaveis
    float x, a, b, y;


    //atribuindo valor as variaveis
    cout << "Atribua um valor para: " << "\n" << "a: ";
    cin >> a;

    cout << "b: ";
    cin >> b;
    
    cout << "y: ";
    cin >> y;


    //efetuando a expresão e exibindo o resultado da mesma
    x = ((a+2)/(b+4)-(2*y));

    cout << "O resultado final da expressao e: " << x;

}