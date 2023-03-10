#include <iostream>
using namespace std;

int maxCifra(int broj) {

    int maksCifra = 0;

    while (broj != 0) {
        if (broj % 10 > maksCifra) {
            maksCifra = broj % 10;
        }
        broj /= 10;
    }

    return maksCifra;
}

int najvecaCifraUNizu(int niz[], int n) {

    int najveca = 0;

    for (int i = 0; i < n; i++) {
        if (maxCifra(niz[i]) > najveca) {
            najveca = maxCifra(niz[i]);
        }
    }

    return najveca;
}

int brojPonavljanjaNajveceCifre(int cifra, int broj) {

    int brojac = 0;

    while (broj != 0) {
        if (broj % 10 == cifra) {
            brojac++;
        }
        broj /=10;
    }

    return brojac;
}

int brojSaNajvisePutaMaksCifre(int niz[], int n) {
    int broj = 0;
    int tmax = 0;
    int cifra = najvecaCifraUNizu(niz, n);

    for (int i = 0; i < n; i++) {
        if (brojPonavljanjaNajveceCifre(cifra, niz[i]) > tmax) {
            tmax = brojPonavljanjaNajveceCifre(cifra, niz[i]);
            broj = niz[i];
        }

    }

    return broj;
}


int main() {

    int niz[100];

    int broj;
    int n = 0;
    while(true) {
        cout << "Unesite " << n+1 << ". broj niza: ";
        cin >> broj;
        if (broj == 0) {
            break;
        }
        niz[n] = broj;
        n++;
    }

    cout << "Najveca cifra: " << najvecaCifraUNizu(niz, n) << endl;
    cout << "Broj sa najvise ponavljanja te cifre: " << brojSaNajvisePutaMaksCifre(niz, n) << endl;
    return 0;
}

