/* nome: ludmila elita
  turma if23
q: Escreva um programa que leia o nome e o valor de determinada mercadoria de uma loja.
Sabendo que o desconto para pagamento à vista é de 10% sobre o valor total, calcule o valor a
ser pago à vista. Escreva o nome da mercadoria, o valor total, o valor do desconto e o valor a ser
pago à vista.*/
#include <iostream>
#include <string>
using namespace std;
int main() {
    string nome;
    double t;
    getline(cin, nome);
    cin >>t;
    double d = t * 10/100;
    double v = t - d;
    cout << "nome " << nome << endl;
     cout << "tudo " << t << endl;
    cout << "desconto " << d << endl;
    cout << "a vista " << v << endl;
}
