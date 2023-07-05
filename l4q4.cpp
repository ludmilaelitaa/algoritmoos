/*nome: ludmila elita 
turma if23
q: . Faça um programa que leia uma string e a imprima de trás para a frente.*/
#include <iostream>
using namespace std;
int main() {
    string q4;
    getline(cin, q4);
    string r = "";
    for (int i = q4.size() - 1; i >= 0; i--) {
        r += q4[i];
    }
  cout << r;
}/* o que é ".size()" ? ele mostra a quantidade de caracteres que estão dentro da string*/
