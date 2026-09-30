#include <iostream>
#include <string>
using namespace std;

int main() {
    string nome;
    int nivel;
    cout << "Nome do jogador: ";
    getline(cin, nome);
    cout << "Nível: ";
    cin >> nivel;
    
    cout << "\nJOGADOR CADASTRADO\n";
    cout << "Nome: " << nome << "\n";
    cout << "Nível: " << nivel << "\n";
    return 0;
}
