/*nome: ludmila elita turma if23*/
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
