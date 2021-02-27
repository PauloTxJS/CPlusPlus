#include <iostream>
#include <string.h> //Biblioteca de string
//Existem várias funções para manipular string

using namespace std;

int main(int argc, char const *argv[])
{
    string names[] = {"Huguinho", "Zezinho", "Luizinho"};

    for (int i = 0; i < 3; i++) {
        cout << names[i] << endl;
    }

    cout << names[2] << endl;

    
    return 0;
}

// http://www.cplusplus.com/