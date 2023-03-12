#include <iostream>
#include <vector>
#include <omp.h>

using namespace std;

const int N = 100;

int main() {
    // initialize matrices A and B
    vector<vector<int>> A(N, vector<int>(N));
    vector<vector<int>> B(N, vector<int>(N));

    // initialize result matrix C
    vector<vector<int>> C(N, vector<int>(N));

    // fill matrices A and B with random values
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            A[i][j] = rand() % 10;
            B[i][j] = rand() % 10;
        }
    }

    // get the number of threads to use from the user
    int num_threads;
    cout << "Enter the number of threads to use: ";
    cin >> num_threads;
    omp_set_num_threads(num_threads);

    // perform matrix multiplication in parallel
#pragma omp parallel for collapse(2)
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            int sum = 0;
#pragma omp parallel for reduction(+:sum)
            for (int k = 0; k < N; k++) {
                sum += A[i][k] * B[k][j];
            }
            C[i][j] = sum;
        }
    }

    // print the result matrix C
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}