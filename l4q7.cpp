/*nome: ludmila elita 
turma if23
q: Faça um programa que leia uma string e imprima uma mensagem dizendo se ela é um
palíndromo ou não. Exemplos de palíndromos: ovo, arara, rever, asa, osso etc.
*/
#include <iostream>
#include <string>
using namespace std;
int main() {
    string q7;
    cin >> q7;
    string reversa = "";
    for (int i = q7.size() - 1; i >= 0; i--) {
        reversa += q7[i];
    }

    if (q7 == reversa) {
       cout << "sim";
    } else {
        cout << "não";
    }
}
