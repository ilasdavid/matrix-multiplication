#include <iostream>
#include <vector>
#include <ctime>


using namespace std;

void low(int O){
    clock_t start = clock(); // start

    vector<vector<int>> A(O, vector<int>(O));
    vector<vector<int>> B(O, vector<int>(O));
    vector<vector<int>> C(O, vector<int>(O));

    //create metrix 
    for (int i = 0; i < O; i++) {
        for (int j = 0; j < O; j++) {
            A[i][j] = rand() % 10;
            B[i][j] = rand() % 10;
        }
    }

    // matrix multiplication
    for (int i = 0; i < O; i++) {
        for (int j = 0; j < O; j++) {
            for (int k = 0; k < O; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    
    clock_t end = clock(); // stop
    
    double time = double(end - start) / CLOCKS_PER_SEC;
    cout << "Total time with 500x500 metrix - sequental: " << time << "s." << endl;
}

void medium(int P){
    clock_t start = clock(); // start

    vector<vector<int>> A(P, vector<int>(P));
    vector<vector<int>> B(P, vector<int>(P));
    vector<vector<int>> C(P, vector<int>(P));

    for (int i = 0; i < P; i++) {
        for (int j = 0; j < P; j++) {
            A[i][j] = rand() % 10;
            B[i][j] = rand() % 10;
        }
    }

    for (int i = 0; i < P; i++) {
        for (int j = 0; j < P; j++) {
            for (int k = 0; k < P; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    
    clock_t end = clock(); // stop
    
    double time = double(end - start) / CLOCKS_PER_SEC;
    cout << "Total time with 1000x1000 metrix - sequental: " << time << "s." << endl;
}

void hard(int N){
    clock_t start = clock(); // start

    vector<vector<int>> A(N, vector<int>(N));
    vector<vector<int>> B(N, vector<int>(N));
    vector<vector<int>> C(N, vector<int>(N));

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            A[i][j] = rand() % 10;
            B[i][j] = rand() % 10;
        }
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            for (int k = 0; k < N; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    
    clock_t end = clock(); // stop
    
    double time = double(end - start) / CLOCKS_PER_SEC;
    cout << "Total time with 2000x2000 metrix - sequental: " << time << "s." << endl;
}

int main() {
        
    int O = 500;
    int P = 1000;
    int N = 2000;


    low(O);
    medium(P);
    hard(N);

    return 0;
}