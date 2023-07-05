/*nome: ludmila elita
turma if23
q: Faça um programa que leia uma string e imprima as quatro primeiras letras dela.*/
#include <iostream>
#include <cstring>
#include <string>
using namespace std;
int main() {
  char q2[50];
  int i;
  fgets(q2,50,stdin);
  for(i=0;i<4;i++){
    cout << q2[i];
  }
}/* o que é fgets? ele lê os caracteres*/
