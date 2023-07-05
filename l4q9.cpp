/*nome: ludmila elita
  turma if23
q: Construa um programa que leia duas strings do teclado. Imprima uma mensagem informando
quantas vezes a segunda string lida está contida dentro da primeira.*/
#include <iostream>
#include <cstring>
using namespace std;
int main() {
    char num1[50];
    char num2[50];
    cin.getline(num1, 50);
    cin.getline(num2, 50);
    int v = 0;
    char* z = num1;
    while (z != NULL) {
        z = strstr(z, num2);

        if (z != NULL) {
            v++;
            z +=strlen(num2);
        }
    }

    cout << v ;
}
