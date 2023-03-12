#include <iostream>
#include <vector>
#include <omp.h>
#include <ctime>

using namespace std;

// PARAREL 2 THREADS INT

void paralel_int_low_2t(int O){
    clock_t start = clock(); // start

    vector<vector<int>> A(O, vector<int>(O));
    vector<vector<int>> B(O, vector<int>(O));
    vector<vector<int>> C(O, vector<int>(O));

    for (int i = 0; i < O; i++) {
        for (int j = 0; j < O; j++) {
            A[i][j] = rand() % 10;
            B[i][j] = rand() % 10;
        }
    }

    int num_threads = 2;
    omp_set_num_threads(num_threads);

    #pragma omp parallel for collapse(2)
    for (int i = 0; i < O; i++) {
        for (int j = 0; j < O; j++) {
            int sum = 0;
    #pragma omp parallel for reduction(+:sum)
            for (int k = 0; k < O; k++) {
                sum += A[i][k] * B[k][j];
            }
            C[i][j] = sum;
        }
    }

    clock_t end = clock(); // stop
    
    double time = double(end - start) / CLOCKS_PER_SEC;
    cout << "-------------------------" << endl;
    cout << "-------  INTEGER  -------" << endl;
    cout << "-------------------------" << endl;
    cout << "Total time with integer 500x500 metrix - pararel - 2 threads: " << time << "s." << endl;
}

void paralel_int_medium_2t(int O){
    clock_t start = clock(); // start

    vector<vector<int>> A(O, vector<int>(O));
    vector<vector<int>> B(O, vector<int>(O));
    vector<vector<int>> C(O, vector<int>(O));

    for (int i = 0; i < O; i++) {
        for (int j = 0; j < O; j++) {
            A[i][j] = rand() % 10;
            B[i][j] = rand() % 10;
        }
    }

    int num_threads = 2;
    omp_set_num_threads(num_threads);

    
    #pragma omp parallel for collapse(2)
    for (int i = 0; i < O; i++) {
        for (int j = 0; j < O; j++) {
            int sum = 0;
    #pragma omp parallel for reduction(+:sum)
            for (int k = 0; k < O; k++) {
                sum += A[i][k] * B[k][j];
            }
            C[i][j] = sum;
        }
    }

    clock_t end = clock(); // stop
    
    double time = double(end - start) / CLOCKS_PER_SEC;
    cout << "Total time with integer 1000x1000 metrix - pararel - 2 threads: " << time << "s." << endl;
}

void paralel_int_heigh_2t(int O ){
    clock_t start = clock(); // start

    vector<vector<int>> A(O, vector<int>(O));
    vector<vector<int>> B(O, vector<int>(O));
    vector<vector<int>> C(O, vector<int>(O));

    for (int i = 0; i < O; i++) {
        for (int j = 0; j < O; j++) {
            A[i][j] = rand() % 10;
            B[i][j] = rand() % 10;
        }
    }

    int num_threads = 2;
    omp_set_num_threads(num_threads);

    #pragma omp parallel for collapse(2)
    for (int i = 0; i < O; i++) {
        for (int j = 0; j < O; j++) {
            int sum = 0;
    #pragma omp parallel for reduction(+:sum)
            for (int k = 0; k < O; k++) {
                sum += A[i][k] * B[k][j];
            }
            C[i][j] = sum;
        }
    }

    clock_t end = clock(); // stop
    
    double time = double(end - start) / CLOCKS_PER_SEC;
    cout << "Total time with integer 2000x2000 metrix - pararel - 2 threads: " << time << "s." << endl;
    cout << "================================" << endl;
}

// PARAREL 4 THREADS INT

void paralel_int_low_4t(int O){
    clock_t start = clock(); // start

    vector<vector<int>> A(O, vector<int>(O));
    vector<vector<int>> B(O, vector<int>(O));
    vector<vector<int>> C(O, vector<int>(O));

    for (int i = 0; i < O; i++) {
        for (int j = 0; j < O; j++) {
            A[i][j] = rand() % 10;
            B[i][j] = rand() % 10;
        }
    }

    int num_threads = 4;
    omp_set_num_threads(num_threads);

    // perform matrix multiplication in parallel
    #pragma omp parallel for collapse(2)
    for (int i = 0; i < O; i++) {
        for (int j = 0; j < O; j++) {
            int sum = 0;
    #pragma omp parallel for reduction(+:sum)
            for (int k = 0; k < O; k++) {
                sum += A[i][k] * B[k][j];
            }
            C[i][j] = sum;
        }
    }

    clock_t end = clock(); // stop
    
    double time = double(end - start) / CLOCKS_PER_SEC;
    cout << "Total time with integer 500x500 metrix - pararel - 4 threads: " << time << "s." << endl;
}

void paralel_int_medium_4t(int O){
    clock_t start = clock(); // start

    vector<vector<int>> A(O, vector<int>(O));
    vector<vector<int>> B(O, vector<int>(O));
    vector<vector<int>> C(O, vector<int>(O));

    for (int i = 0; i < O; i++) {
        for (int j = 0; j < O; j++) {
            A[i][j] = rand() % 10;
            B[i][j] = rand() % 10;
        }
    }

    int num_threads = 4;
    omp_set_num_threads(num_threads);

    
    #pragma omp parallel for collapse(2)
    for (int i = 0; i < O; i++) {
        for (int j = 0; j < O; j++) {
            int sum = 0;
    #pragma omp parallel for reduction(+:sum)
            for (int k = 0; k < O; k++) {
                sum += A[i][k] * B[k][j];
            }
            C[i][j] = sum;
        }
    }

    clock_t end = clock(); // stop
    
    double time = double(end - start) / CLOCKS_PER_SEC;
    cout << "Total time with integer 1000x1000 metrix - pararel - 4 threads: " << time << "s." << endl;
}

void paralel_int_heigh_4t(int O ){
    clock_t start = clock(); // start

    vector<vector<int>> A(O, vector<int>(O));
    vector<vector<int>> B(O, vector<int>(O));
    vector<vector<int>> C(O, vector<int>(O));

    for (int i = 0; i < O; i++) {
        for (int j = 0; j < O; j++) {
            A[i][j] = rand() % 10;
            B[i][j] = rand() % 10;
        }
    }

    int num_threads = 4;
    omp_set_num_threads(num_threads);

    #pragma omp parallel for collapse(2)
    for (int i = 0; i < O; i++) {
        for (int j = 0; j < O; j++) {
            int sum = 0;
    #pragma omp parallel for reduction(+:sum)
            for (int k = 0; k < O; k++) {
                sum += A[i][k] * B[k][j];
            }
            C[i][j] = sum;
        }
    }

    clock_t end = clock(); // stop
    
    double time = double(end - start) / CLOCKS_PER_SEC;
    cout << "Total time with integer 2000x2000 metrix - pararel - 4 threads: " << time << "s." << endl;
    cout << "================================" << endl;
}

// PARAREL 8 THREADS INT

void paralel_int_low_8t(int O){
    clock_t start = clock(); // start

    vector<vector<int>> A(O, vector<int>(O));
    vector<vector<int>> B(O, vector<int>(O));
    vector<vector<int>> C(O, vector<int>(O));

    for (int i = 0; i < O; i++) {
        for (int j = 0; j < O; j++) {
            A[i][j] = rand() % 10;
            B[i][j] = rand() % 10;
        }
    }

    int num_threads = 8;
    omp_set_num_threads(num_threads);

    // perform matrix multiplication in parallel
    #pragma omp parallel for collapse(2)
    for (int i = 0; i < O; i++) {
        for (int j = 0; j < O; j++) {
            int sum = 0;
    #pragma omp parallel for reduction(+:sum)
            for (int k = 0; k < O; k++) {
                sum += A[i][k] * B[k][j];
            }
            C[i][j] = sum;
        }
    }

    clock_t end = clock(); // stop
    
    double time = double(end - start) / CLOCKS_PER_SEC;
    cout << "Total time with integer 500x500 metrix - pararel - 8 threads: " << time << "s." << endl;
}

void paralel_int_medium_8t(int O){
    clock_t start = clock(); // start

    vector<vector<int>> A(O, vector<int>(O));
    vector<vector<int>> B(O, vector<int>(O));
    vector<vector<int>> C(O, vector<int>(O));

    for (int i = 0; i < O; i++) {
        for (int j = 0; j < O; j++) {
            A[i][j] = rand() % 10;
            B[i][j] = rand() % 10;
        }
    }

    int num_threads = 8;
    omp_set_num_threads(num_threads);

    
    #pragma omp parallel for collapse(2)
    for (int i = 0; i < O; i++) {
        for (int j = 0; j < O; j++) {
            int sum = 0;
    #pragma omp parallel for reduction(+:sum)
            for (int k = 0; k < O; k++) {
                sum += A[i][k] * B[k][j];
            }
            C[i][j] = sum;
        }
    }

    clock_t end = clock(); // stop
    
    double time = double(end - start) / CLOCKS_PER_SEC;
    cout << "Total time with integer 1000x1000 metrix - pararel - 8 threads: " << time << "s." << endl;
}

void paralel_int_heigh_8t(int O ){
    clock_t start = clock(); // start

    vector<vector<int>> A(O, vector<int>(O));
    vector<vector<int>> B(O, vector<int>(O));
    vector<vector<int>> C(O, vector<int>(O));

    for (int i = 0; i < O; i++) {
        for (int j = 0; j < O; j++) {
            A[i][j] = rand() % 10;
            B[i][j] = rand() % 10;
        }
    }

    int num_threads = 8;
    omp_set_num_threads(num_threads);

    #pragma omp parallel for collapse(2)
    for (int i = 0; i < O; i++) {
        for (int j = 0; j < O; j++) {
            int sum = 0;
    #pragma omp parallel for reduction(+:sum)
            for (int k = 0; k < O; k++) {
                sum += A[i][k] * B[k][j];
            }
            C[i][j] = sum;
        }
    }

    clock_t end = clock(); // stop
    
    double time = double(end - start) / CLOCKS_PER_SEC;
    cout << "Total time with integer 2000x2000 metrix - pararel - 8 threads: " << time << "s." << endl;
    cout << "================================" << endl;
}


// PARAREL 2 THREADS FLOAT


void paralel_float_low_2t(int O){
    clock_t start = clock(); // start

    vector<vector<float>> A(O, vector<float>(O));
    vector<vector<float>> B(O, vector<float>(O));
    vector<vector<float>> C(O, vector<float>(O));

    for (int i = 0; i < O; i++) {
        for (int j = 0; j < O; j++) {
            A[i][j] = static_cast<float>(rand()) / static_cast<float>(RAND_MAX);
            B[i][j] = static_cast<float>(rand()) / static_cast<float>(RAND_MAX);
        }
    }

    int num_threads = 2;
    omp_set_num_threads(num_threads);

    #pragma omp parallel for collapse(2)
    for (int i = 0; i < O; i++) {
        for (int j = 0; j < O; j++) {
            int sum = 0;
    #pragma omp parallel for reduction(+:sum)
            for (int k = 0; k < O; k++) {
                sum += A[i][k] * B[k][j];
            }
            C[i][j] = sum;
        }
    }

    clock_t end = clock(); // stop
    
    double time = double(end - start) / CLOCKS_PER_SEC;
    cout << "-------------------------" << endl;
    cout << "--------  FLOAT  --------" << endl;
    cout << "-------------------------" << endl;
    cout << "Total time with float 500x500 metrix - pararel - 2 threads: " << time << "s." << endl;
}

void paralel_float_medium_2t(int O){
    clock_t start = clock(); // start

    vector<vector<float>> A(O, vector<float>(O));
    vector<vector<float>> B(O, vector<float>(O));
    vector<vector<float>> C(O, vector<float>(O));

    for (int i = 0; i < O; i++) {
        for (int j = 0; j < O; j++) {
            A[i][j] = static_cast<float>(rand()) / static_cast<float>(RAND_MAX);
            B[i][j] = static_cast<float>(rand()) / static_cast<float>(RAND_MAX);
        }
    }

    int num_threads = 2;
    omp_set_num_threads(num_threads);

    
    #pragma omp parallel for collapse(2)
    for (int i = 0; i < O; i++) {
        for (int j = 0; j < O; j++) {
            int sum = 0;
    #pragma omp parallel for reduction(+:sum)
            for (int k = 0; k < O; k++) {
                sum += A[i][k] * B[k][j];
            }
            C[i][j] = sum;
        }
    }

    clock_t end = clock(); // stop
    
    double time = double(end - start) / CLOCKS_PER_SEC;
    cout << "Total time with float 1000x1000 metrix - pararel - 2 threads: " << time << "s." << endl;
}

void paralel_float_heigh_2t(int O){
    clock_t start = clock(); // start

    vector<vector<float>> A(O, vector<float>(O));
    vector<vector<float>> B(O, vector<float>(O));
    vector<vector<float>> C(O, vector<float>(O));

    for (int i = 0; i < O; i++) {
        for (int j = 0; j < O; j++) {
            A[i][j] = static_cast<float>(rand()) / static_cast<float>(RAND_MAX);
            B[i][j] = static_cast<float>(rand()) / static_cast<float>(RAND_MAX);
        }
    }

    int num_threads = 2;
    omp_set_num_threads(num_threads);

    #pragma omp parallel for collapse(2)
    for (int i = 0; i < O; i++) {
        for (int j = 0; j < O; j++) {
            int sum = 0;
    #pragma omp parallel for reduction(+:sum)
            for (int k = 0; k < O; k++) {
                sum += A[i][k] * B[k][j];
            }
            C[i][j] = sum;
        }
    }

    clock_t end = clock(); // stop
    
    double time = double(end - start) / CLOCKS_PER_SEC;
    cout << "Total time with float 2000x2000 metrix - pararel - 2 threads: " << time << "s." << endl;
    cout << "================================" << endl;
}

// PARAREL 4 THREADS INT

void paralel_float_low_4t(int O){
    clock_t start = clock(); // start

    vector<vector<float>> A(O, vector<float>(O));
    vector<vector<float>> B(O, vector<float>(O));
    vector<vector<float>> C(O, vector<float>(O));

    for (int i = 0; i < O; i++) {
        for (int j = 0; j < O; j++) {
            A[i][j] = static_cast<float>(rand()) / static_cast<float>(RAND_MAX);
            B[i][j] = static_cast<float>(rand()) / static_cast<float>(RAND_MAX);
        }
    }

    int num_threads = 4;
    omp_set_num_threads(num_threads);

    // perform matrix multiplication in parallel
    #pragma omp parallel for collapse(2)
    for (int i = 0; i < O; i++) {
        for (int j = 0; j < O; j++) {
            int sum = 0;
    #pragma omp parallel for reduction(+:sum)
            for (int k = 0; k < O; k++) {
                sum += A[i][k] * B[k][j];
            }
            C[i][j] = sum;
        }
    }

    clock_t end = clock(); // stop
    
    double time = double(end - start) / CLOCKS_PER_SEC;
    cout << "Total time with float 500x500 metrix - pararel - 4 threads: " << time << "s." << endl;
}

void paralel_float_medium_4t(int O){
    clock_t start = clock(); // start

    vector<vector<float>> A(O, vector<float>(O));
    vector<vector<float>> B(O, vector<float>(O));
    vector<vector<float>> C(O, vector<float>(O));

    for (int i = 0; i < O; i++) {
        for (int j = 0; j < O; j++) {
            A[i][j] = static_cast<float>(rand()) / static_cast<float>(RAND_MAX);
            B[i][j] = static_cast<float>(rand()) / static_cast<float>(RAND_MAX);
        }
    }

    int num_threads = 4;
    omp_set_num_threads(num_threads);

    
    #pragma omp parallel for collapse(2)
    for (int i = 0; i < O; i++) {
        for (int j = 0; j < O; j++) {
            int sum = 0;
    #pragma omp parallel for reduction(+:sum)
            for (int k = 0; k < O; k++) {
                sum += A[i][k] * B[k][j];
            }
            C[i][j] = sum;
        }
    }

    clock_t end = clock(); // stop
    
    double time = double(end - start) / CLOCKS_PER_SEC;
    cout << "Total time with float 1000x1000 metrix - pararel - 4 threads: " << time << "s." << endl;
}

void paralel_float_heigh_4t(int O ){
    clock_t start = clock(); // start

    vector<vector<float>> A(O, vector<float>(O));
    vector<vector<float>> B(O, vector<float>(O));
    vector<vector<float>> C(O, vector<float>(O));

    for (int i = 0; i < O; i++) {
        for (int j = 0; j < O; j++) {
            A[i][j] = static_cast<float>(rand()) / static_cast<float>(RAND_MAX);
            B[i][j] = static_cast<float>(rand()) / static_cast<float>(RAND_MAX);
        }
    }

    int num_threads = 4;
    omp_set_num_threads(num_threads);

    #pragma omp parallel for collapse(2)
    for (int i = 0; i < O; i++) {
        for (int j = 0; j < O; j++) {
            int sum = 0;
    #pragma omp parallel for reduction(+:sum)
            for (int k = 0; k < O; k++) {
                sum += A[i][k] * B[k][j];
            }
            C[i][j] = sum;
        }
    }

    clock_t end = clock(); // stop
    
    double time = double(end - start) / CLOCKS_PER_SEC;
    cout << "Total time with float 2000x2000 metrix - pararel - 4 threads: " << time << "s." << endl;
    cout << "================================" << endl;
}

// PARAREL 8 THREADS INT

void paralel_float_low_8t(int O){
    clock_t start = clock(); // start

    vector<vector<float>> A(O, vector<float>(O));
    vector<vector<float>> B(O, vector<float>(O));
    vector<vector<float>> C(O, vector<float>(O));

    for (int i = 0; i < O; i++) {
        for (int j = 0; j < O; j++) {
            A[i][j] = static_cast<float>(rand()) / static_cast<float>(RAND_MAX);
            B[i][j] = static_cast<float>(rand()) / static_cast<float>(RAND_MAX);
        }
    }

    int num_threads = 8;
    omp_set_num_threads(num_threads);

    // perform matrix multiplication in parallel
    #pragma omp parallel for collapse(2)
    for (int i = 0; i < O; i++) {
        for (int j = 0; j < O; j++) {
            int sum = 0;
    #pragma omp parallel for reduction(+:sum)
            for (int k = 0; k < O; k++) {
                sum += A[i][k] * B[k][j];
            }
            C[i][j] = sum;
        }
    }

    clock_t end = clock(); // stop
    
    double time = double(end - start) / CLOCKS_PER_SEC;
    cout << "Total time with float 500x500 metrix - pararel - 8 threads: " << time << "s." << endl;
}

void paralel_float_medium_8t(int O){
    clock_t start = clock(); // start

    vector<vector<float>> A(O, vector<float>(O));
    vector<vector<float>> B(O, vector<float>(O));
    vector<vector<float>> C(O, vector<float>(O));

    for (int i = 0; i < O; i++) {
        for (int j = 0; j < O; j++) {
            A[i][j] = static_cast<float>(rand()) / static_cast<float>(RAND_MAX);
            B[i][j] = static_cast<float>(rand()) / static_cast<float>(RAND_MAX);
        }
    }

    int num_threads = 8;
    omp_set_num_threads(num_threads);

    
    #pragma omp parallel for collapse(2)
    for (int i = 0; i < O; i++) {
        for (int j = 0; j < O; j++) {
            int sum = 0;
    #pragma omp parallel for reduction(+:sum)
            for (int k = 0; k < O; k++) {
                sum += A[i][k] * B[k][j];
            }
            C[i][j] = sum;
        }
    }

    clock_t end = clock(); // stop
    
    double time = double(end - start) / CLOCKS_PER_SEC;
    cout << "Total time with float 1000x1000 metrix - pararel - 8 threads: " << time << "s." << endl;
}

void paralel_float_heigh_8t(int O ){
    clock_t start = clock(); // start

    vector<vector<float>> A(O, vector<float>(O));
    vector<vector<float>> B(O, vector<float>(O));
    vector<vector<float>> C(O, vector<float>(O));

    for (int i = 0; i < O; i++) {
        for (int j = 0; j < O; j++) {
            A[i][j] = static_cast<float>(rand()) / static_cast<float>(RAND_MAX);
            B[i][j] = static_cast<float>(rand()) / static_cast<float>(RAND_MAX);
        }
    }

    int num_threads = 8;
    omp_set_num_threads(num_threads);

    #pragma omp parallel for collapse(2)
    for (int i = 0; i < O; i++) {
        for (int j = 0; j < O; j++) {
            int sum = 0;
    #pragma omp parallel for reduction(+:sum)
            for (int k = 0; k < O; k++) {
                sum += A[i][k] * B[k][j];
            }
            C[i][j] = sum;
        }
    }

    clock_t end = clock(); // stop
    
    double time = double(end - start) / CLOCKS_PER_SEC;
    cout << "Total time with float 2000x2000 metrix - pararel - 8 threads: " << time << "s." << endl;
    cout << "================================" << endl;
}


int main() {

    int low = 500;
    int medium = 1000;
    int high = 2000;

    paralel_int_low_2t(low);
    paralel_int_medium_2t(medium);
    paralel_int_heigh_2t(high);

    paralel_int_low_4t(low);
    paralel_int_medium_4t(medium);
    paralel_int_heigh_4t(high);

    paralel_int_low_8t(low);
    paralel_int_medium_8t(medium);
    paralel_int_heigh_8t(high);

    paralel_float_low_2t(low);
    paralel_float_medium_2t(medium);
    paralel_float_heigh_2t(high);

    paralel_float_low_4t(low);
    paralel_float_medium_4t(medium);
    paralel_float_heigh_4t(high);

    paralel_float_low_8t(low);
    paralel_float_medium_8t(medium);
    paralel_float_heigh_8t(high);

    

    return 0;
}