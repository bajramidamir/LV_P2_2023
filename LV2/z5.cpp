#include <iostream>
using namespace std;


void f(int niz[], int n, int& negativni, int& razliciti) {


    for (int i = 0; i < n; i++) {
        if (niz[i] < 0) {
            negativni++;
        }
    }

    for (int i = 0; i < n; i++) {
        bool bPojavioSe = false;
        for (int j = 0; j < i; j++) {
            if (niz[i] == niz[j]) {
                bPojavioSe = true;
                break;
            }
        }
    }
    //if (bPojavioSe == false) {razliciti++;}

}

int main() {


    int niz[] = {-1, 2, 3, 4, 2, 1, -1};
    int negativni = 0;
    int razliciti = 0;

    f(niz, 7, negativni, razliciti);
    cout << negativni << endl;
    cout << razliciti << endl;

    return 0;




}
