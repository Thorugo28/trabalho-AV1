#include <iostream>

using namespace std;

int main(){
    //declarando as variaveis
    float y, b, k, x;

    //atribuindo valores
    cout << "Atribua valores para: " << "\n" << "b: ";
    cin >> b;

    cout << "k: ";
    cin >> k;

    cout << "x: ";
    cin >> x;

    //realizando a expressao
    y = ((2*b) + 5 + (3*k))/(2*x);

    cout << "O resultado e: " << y;


}