#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>

using namespace std;

void sequental_int_low(int O){
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
    
    cout << "-------------------------" << endl;
    cout << "-------  INTEGER  -------" << endl;
    cout << "-------------------------" << endl;
    cout << "Total time with integer 500x500 metrix - sequental: " << time << "s." << endl;
}

void sequental_int_medium(int P){
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
    cout << "Total time with integer 1000x1000 metrix - sequental: " << time << "s." << endl;
}

void sequental_int_hard(int N){
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
    cout << "Total time with integer 2000x2000 metrix - sequental: " << time << "s." << endl;
    cout << "================================" << endl;

}

void sequental_float_low(int O){
    clock_t start = clock(); // start

    vector<vector<float>> A(O, vector<float>(O));
    vector<vector<float>> B(O, vector<float>(O));
    vector<vector<float>> C(O, vector<float>(O));

    //create metrix 
    for (int i = 0; i < O; i++) {
        for (int j = 0; j < O; j++) {
            A[i][j] = static_cast<float>(rand()) / static_cast<float>(RAND_MAX);
            B[i][j] = static_cast<float>(rand()) / static_cast<float>(RAND_MAX);
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
    
    cout << "-------------------------" << endl;
    cout << "--------  FLOAT  --------" << endl;
    cout << "-------------------------" << endl;
    cout << "Total time with float 500x500 metrix - sequental: " << time << "s." << endl;
}

void sequental_float_medium(int P){
    clock_t start = clock(); // start

    vector<vector<float>> A(P, vector<float>(P));
    vector<vector<float>> B(P, vector<float>(P));
    vector<vector<float>> C(P, vector<float>(P));

    for (int i = 0; i < P; i++) {
        for (int j = 0; j < P; j++) {
            A[i][j] = static_cast<float>(rand()) / static_cast<float>(RAND_MAX);
            B[i][j] = static_cast<float>(rand()) / static_cast<float>(RAND_MAX);
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
    cout << "Total time with float 1000x1000 metrix - sequental: " << time << "s." << endl;
}

void sequental_float_hard(int N){
    clock_t start = clock(); // start

    vector<vector<float>> A(N, vector<float>(N));
    vector<vector<float>> B(N, vector<float>(N));
    vector<vector<float>> C(N, vector<float>(N));

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            A[i][j] = static_cast<float>(rand()) / static_cast<float>(RAND_MAX);
            B[i][j] = static_cast<float>(rand()) / static_cast<float>(RAND_MAX);
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
    cout << "Total time with float 2000x2000 metrix - sequental: " << time << "s." << endl;
    cout << "================================" << endl;

}

int main() {
        
    int O = 500;
    int P = 1000;
    int N = 2000;

    sequental_int_low(O);
    sequental_int_medium(P);
    sequental_int_hard(N);

    sequental_float_low(O);
    sequental_float_medium(P);
    sequental_float_hard(N);

    return 0;
}