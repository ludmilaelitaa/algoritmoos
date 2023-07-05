/*nome:ludmila elita
turma if23
q: Construa um programa que leia duas strings do teclado. Imprima uma mensagem informando
se a segunda string lida está contida dentro da primeira. (estude a função strstr() que realiza
esta tarefa)
*/
#include <iostream>
#include <cstring>
using namespace std;

int main(){
    char num1[40];
    char num2[40];
    cin.getline(num1, 40);
    cin.getline(num2, 40);

    char* resultado = strstr(num1, num2);

    if (resultado) {
        cout << "num2 está dentro de num1" << endl;
    } else {
       cout << "num2 nao esta dentro de num1" << endl;
    }

}
