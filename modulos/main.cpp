/*
Para incluir módulos criados por você siga as instruções abaixo:

1º Crie o arquivo principal (main)

2º Crie o módulo que você irá importar no arquivo principal, no meu caso
criei o arquivo 'my_math.cpp'

3º Inclua o 'my_math.cpp' no arquivo 'main.cpp' com a seguinte linha: 
#include "my_math.h"

4º Criei o arquivo 'my_math.h' e nele coloque a estrutura da função que deseja 
importar no arquivo 'main.cpp' e mais três linhas para a definição do arquivo.
Por exemplo: 

#ifndef _MY_MATH_H_
#define _MY_MATH_H_

double soma(double n1, double n2);

#endif

5º Para compilar no terminal bash, execute na pasta do projeto o seguinte 
comando:

g++ -o main main.cpp my_math.cpp -Wall

6º Para executar o programa execute:
./main

*/

#include <iostream>
#include "my_math.h"

using namespace std;

int main(int argc, char const *argv[])
{
    double n1 = 10.0;
    double n2 = 10.0;

    cout << "A soma é: " << soma(n1, n2) << endl;
    return 0;
}
