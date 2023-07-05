/*nome: ludmila elita 
turma if23
q: Faça um programa que leia uma string e a inverta. A string invertida deve ser armazenada na
mesma variável. Em seguida, imprima a string invertida.*/
#include <iostream>
#include <cstring>
#include <string.h>
#include <string>
using namespace std;
int main() {
  string k;
  getline(cin,k);
  int o=0; 
  string e=k; 
  for(int i = k.size()-1; i>=0; i--){
  e[o]=k[i];
  o++; 
  }
  cout << e << endl;
}
