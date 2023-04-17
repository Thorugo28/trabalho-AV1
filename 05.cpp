#include <iostream>

using namespace std;

int main(){
    //declarando variaveis
    int a, b, y;

    cout << "Escolha um valor para a: ";
    cin >> a;

    cout << "Escolha um valor para b: ";
    cin >> b;

    cout << "Os valores de A e B sao, respectivamente: " << a << " e " << b;

    cout << "\n" << "Agora efetuaremos a inversão de valores entre eles" << "\n";

    y = a;
    a = b;
    b = y;

    cout << "Os valores de A e B agora sao, respectivamentes: " << a << " e " << b;


}