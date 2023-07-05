/*nome: ludmila elita
  turma if23
q: Escreva um programa que recebe uma string S e dois valores inteiros não negativos i e j. Em
seguida, imprima os caracteres contidos no segmento que vai de i a j da string S.*/
#include <iostream>
#include <string>
using namespace std;
int main() {
    string S;
    int i, j;
    getline(cin, S);
    cin >> i;
    cin >> j;
    cout << "segmento de S: ";
    for (int o=i; o<=j; o++) {
       cout << S[o];
    }
    cout <<endl;
}
