/*nome: ludmila elita 
turma if23
q: Faça um programa que leia uma string e imprima uma mensagem dizendo se ela é um
palíndromo ou não. Exemplos de palíndromos: ovo, arara, rever, asa, osso etc.
*/
#include <iostream>
#include <cstring>
#include <string.h>
#include <string>
using namespace std;
int main() {
  string a;
  string a2;
  int i=0;
  getline(cin,a);
  for(int i = a.size()-1; i>=0; i--){
    a2+=a[i];
  } if(a==a2){
     cout << "sim" << endl;
   }else{
     cout << "nao" << endl;
   }
}
}
