#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int hora = 11;

    if (hora >= 0 && hora <= 12) {
        cout << "Bom dia!" << endl;
    } else if(hora > 12 && hora <= 18) {
        cout << "Boa tarde" << endl;
    } else { 
        cout << "Boa noite" << endl;
    }

    return 0;
}
