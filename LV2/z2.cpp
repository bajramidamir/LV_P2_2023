#include <iostream>
#include <string>
using namespace std;

string decToBin(int n) {
    string binZapis = "";
    string binCifra = "";

    while (n != 0) {
        binCifra = to_string(n % 2);
        binZapis = binCifra + binZapis;
        n = n /2;
    }

    return binZapis;
}

int main() {
    int x;
    cout << "Unesite broj: ";
    cin >> x;
    string binZapis = decToBin(x);
    cout << "Binarni zapis broja " << x << " je " << binZapis;

    return 0;
}


