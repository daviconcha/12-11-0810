#include <iostream>

using namespace std;

int main() {
    // Declarando variáveis
    int idade;
    double altura;
    string nome;

    // Entrada de dados
    cout << "Digite o seu nome: ";
    cin >> nome;

    cout << "Digite a sua idade: ";
    cin >> idade;

    cout << "Digite a sua altura (em metros): ";
    cin >> altura;

    // Saída de dados
    cout << "\nOlá, " << nome << "!\n";
    cout << "Você tem " << idade << " anos e sua altura é " << altura << " metros.\n";

    return 0;
}