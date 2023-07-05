/*nome: ludmila elita turma if23*/
#include <iostream>
using namespace std;
int main() {
    string q4;
    getline(cin, q4);
    string r = "";
    for (int i = q4.size() - 1; i >= 0; i--) {
        r += q4[i];
    }
  cout << r;
}
