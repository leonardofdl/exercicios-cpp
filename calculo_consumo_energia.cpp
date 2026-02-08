#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    float salarioMinimo, quantidadeKW;
    float precoKW, valorPago, valorComDesconto;

    cout << "Digite o salario minimo: ";
    cin >> salarioMinimo;

    cout << "Digite a quantidade de kW consumida: ";
    cin >> quantidadeKW;

    // 100 kW custam 1/7 do salario minimo
    // Logo, 1 kW custa salarioMinimo / 700
    precoKW = salarioMinimo / 700;

    valorPago = precoKW * quantidadeKW;
    valorComDesconto = valorPago * 0.9; // 10% de desconto

    cout << fixed << setprecision(2);
    cout << "\nPreco de cada kW: R$ " << precoKW << endl;
    cout << "Valor a ser pago: R$ " << valorPago << endl;
    cout << "Valor com 10% de desconto: R$ " << valorComDesconto << endl;

    return 0;
}
