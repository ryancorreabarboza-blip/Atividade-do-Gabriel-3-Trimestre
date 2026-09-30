#include <iostream>

using namespace namespace std;

int main() {
    double nota;

    cout << "Pontuação (0 a 10): ";
    cin >> nota;

    if (nota < 0 || nota > 10) {
        cout << "Pontuação inválida." << endl;
    } else if (nota < 4) {
        cout << "Insatisfatório" << endl;
    } else if (nota < 6) {
        cout << "Regular" << endl;
    } else if (nota < 8) {
        cout << "Bom" << endl;
    } else {
        cout << "Excelente" << endl;
    }

    return 0;
}
