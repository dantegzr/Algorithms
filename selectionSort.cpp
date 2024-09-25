#include <iostream>
#include <vector>

using namespace std;

// Función para intercambiar dos elementos
void mySwap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

// Algoritmo de ordenamiento por selección
void selectionSort(vector<int>& vec) {
    int n = vec.size();
    for (int i = 0; i < n - 1; i++) {
        int min = i;
        for (int j = i + 1; j < n; j++) {
            if (vec[j] < vec[min]) {
                min = j;
            }
        }
        if (min != i) {
            mySwap(vec[i], vec[min]);
        }
    }
}

// Función para imprimir el contenido del vector
void printVector(const vector<int>& vec) {
    for (int i = 0; i < vec.size(); i++) {
        cout << vec[i] << " ";
    }
    cout << endl;
}

int main() {
    // Inicializar el vector
    vector<int> vec = {1, 10, 3, 5, 1, 0, 2, 8};

    // Mostrar vector antes del ordenamiento
    cout << "Vector antes de ordenar: ";
    printVector(vec);

    // Ordenar el vector
    selectionSort(vec);

    // Mostrar vector después del ordenamiento
    cout << "Vector despues de ordenar: ";
    printVector(vec);

    return 0;
}
