#include <iostream>
#include <cstdlib>
#include <ctime>
#include <omp.h>

using namespace std;

int main() {
    srand(time(NULL));  // inicializácia generátora náhodných čísel

    int riadky = 1000;
    int stlpce = 100;
    int matica1[riadky][stlpce];
    int matica2[riadky][stlpce];
    int vysledna_matica[riadky][stlpce];

    // generovanie prvej matice
    #pragma omp parallel for
    for (int i = 0; i < riadky; i++) {
        for (int j = 0; j < stlpce; j++) {
            matica1[i][j] = rand() % 10;  // generovanie náhodného čísla od 0 do 9
        }
    }

    // generovanie druhej matice
    #pragma omp parallel for
    for (int i = 0; i < riadky; i++) {
        for (int j = 0; j < stlpce; j++) {
            matica2[i][j] = rand() % 10;  // generovanie náhodného čísla od 0 do 9
        }
    }

    // meranie času násobenia matíc
    double start = clock();;

    // násobenie matíc
    #pragma omp parallel for
    for (int i = 0; i < riadky; i++) {
        for (int j = 0; j < stlpce; j++) {
            vysledna_matica[i][j] = 0;
            for (int k = 0; k < stlpce; k++) {
                vysledna_matica[i][j] += matica1[i][k] * matica2[k][j];
            }
        }
    }

    // výpis výslednej matice
    for (int i = 0; i < riadky; i++) {
        for (int j = 0; j < stlpce; j++) {
            // cout << vysledna_matica[i][j] << " ";
        }
        // cout << endl;
    }

    // meranie času trvania programu
    double end = clock();
    double time = double(end - start) / CLOCKS_PER_SEC;
    cout << "Total time pararel: " << time << "s." << endl;

    return 0;
}