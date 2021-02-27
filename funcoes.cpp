#include <iostream>

using namespace std;

bool par(int num) {
    if (num % 2 == 0) {
        return true;
    }
    return false;
}

void show() {
    cout << "Hello World!" << endl;
}

int main(int argc, char const *argv[])
{

    

    show();
    // int n;

    // cout << "Digite um número: " << endl;
    // cin >> n;

    // if (par(n)) {
    //     cout << "O número " << n << " é PAR" << endl;
    // } else {
    //     cout << "O número " << n << " é ÍMPAR" << endl;
    // }

    return 0;
}
