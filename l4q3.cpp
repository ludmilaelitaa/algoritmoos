/*nome: ludmila elita
turma if23
q: Sem usar a função strlen(), faça um programa que leia e imprima quantos caracteres ela
possui.
*/
#include <iostream>
#include <string>
#include <cstring>
using namespace std;
int main() {
  string q3;
  int v=0;
  getline(cin,q3);
    for (int i = 0; i < q3.size(); i++) {
        v++;
    }
  cout << v;
    
}
