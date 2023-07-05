/*nome: ludmila elita
  turma if23
q: Escreva um programa que leia duas strings e as imprima em ordem alfabética, a ordem em
que elas aparecem num dicionário.*/
#include <iostream>
#include <string>
#include <cstring>
using namespace std;
int main() {
  char str1[10], str2[10];
  for (int i=0; i<5; i++){
    cin >> str1[i];
  }
  for (int j=0; j<5; j++){
    cin >> str2[j];
  }
  if (strcmp(str1, str2) < 0){ 
    cout << str1 << endl << str2 << endl;
  } else {
      cout << str2 << endl << str1 << endl;
  }
}
