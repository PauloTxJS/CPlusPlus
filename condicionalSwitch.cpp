/*
    Programa Calculadora
    Operações válidas
    '+' -> adição
    '-' -> subtração
    '*' -> multiplicação
    '/' -> divisão
 */

#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    double n1, n2, result;
    char op;

    cout << "Digite a operação: " << endl;
    cin >> op;

    cout << "Digite o 1º número: " << endl;
    cin >> n1;
    
    cout << "Digite o 2º número: " << endl;
    cin >> n2;

    if (op == '/' && n2 == 0) {
        cout << "Divisor não pode ser 0" << endl;
        return 0;
    }

    switch(op) {
 
        case '+':
            result = n1 + n2;
            cout << result <<endl;
            break;
        case '-':
            result = n1 - n2;
            cout << result <<endl;
            break;
        case '*':
            result = n1 * n2;
            cout << result <<endl;
            break;
        case '/':
            result = n1 / n2;
            cout << result <<endl;
            break;
        default: 
            cout << "Operação Inválida" << endl;
            break;

    }

    return 0;
}