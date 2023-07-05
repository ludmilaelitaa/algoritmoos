/*nome:ludmila elita, turma if23*/
#include <iostream>
#include <cstring>
using namespace std;

int main(){
    char num1[100];
    char num2[100];
    cin.getline(num1, 100);
    cin.getline(num2, 100);

    char* resultado = strstr(num1, num2);

    if (resultado) {
        cout << "num2 está dentro de num1" << endl;
    } else {
       cout << "num2 nao esta dentro de num1" << endl;
    }

}
