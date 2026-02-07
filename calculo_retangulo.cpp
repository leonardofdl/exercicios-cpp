// Programa para calcular area, perimetro e diagonal de um retangulo

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int base, altura;
    int perimetro, area;
    double diagonal;

    cout << "Digite o valor da base: ";
    cin >> base;

    cout << "Digite o valor da altura: ";
    cin >> altura;

    // Calculos
    perimetro = 2 * (base + altura);
    area = base * altura;
    diagonal = sqrt((base * base) + (altura * altura));

    // Saida de dados
    cout << "Perimetro: " << perimetro << endl;
    cout << "Area: " << area << endl;
    cout << "Diagonal: " << diagonal << endl;

    return 0;
}
