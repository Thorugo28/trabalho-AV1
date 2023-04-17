#include <iostream>

using namespace std;

int main(){

    //declarando variaveis
    float A, B, m;
    
    //atribuindo valor às variaveis
    cout << "Digite sua primeira nota: ";
    cin >> A;
    
    cout << "Digite sua segunda nota: ";
    cin >> B;
    
    //realizando o calculo de média e imprimindo o resultado
    m = (A+B)/2;

    cout << "Sua media foi de: " << m;

}