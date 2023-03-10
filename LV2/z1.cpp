#include <iostream>
#include <string>
using namespace std;

void decToBin(int n) {
    string binZapis = "";
    string binCifra = "";
    int nKopija = n;

    while (n != 0) {

        binCifra = to_string(n % 2);

        binZapis = binCifra + binZapis;

        n = n /2;


    }


    cout << "Binarni zapis broja " << nKopija << " je " << binZapis << endl;



}

int main() {
    int x;
    cout << "Unesite broj: ";
    cin >> x;
    decToBin(x);

    return 0;
}

