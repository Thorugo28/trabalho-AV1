#include <iostream>
#include <cmath>

using namespace std;

int main(){

    //declarando variaveis
    double x1, x2, y1, y2, D;

    //Atribuindo valor as variaveis
    cout << "Insira o valor de x1: ";
    cin >> x1;

    cout << "Insira o valor de x2: ";
    cin >> x2;

    cout << "Insira o valor de y1: ";
    cin >> y1;

    cout << "Insira o valor de y2: ";
    cin >> y2;

    //Ralizando a conta
    D = pow((x2 - x1), 2) + pow((y2 - y1), 2);

    cout << "O resultado e: " << D;

}