#include <iostream>
using namespace std;

// Función para intercambiar dos elementos (renombrada para evitar conflicto con std::swap)
void mySwap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

// Función para realizar la partición del arreglo
int partition(int arr[], int low, int high) {
    int pivot = arr[high]; // Se toma el último elemento como pivote
    int i = low - 1; // Índice del elemento más pequeño

    for (int j = low; j < high; j++) {
        if (arr[j] < pivot) {
            i++;
            mySwap(arr[i], arr[j]); // Intercambiar si el elemento actual es menor que el pivote
        }
    }
    mySwap(arr[i + 1], arr[high]); // Colocar el pivote en su posición correcta
    return i + 1;
}

// Algoritmo de QuickSort
void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high); // pi es el índice de partición
        quickSort(arr, low, pi - 1);  // Ordenar los elementos antes de la partición
        quickSort(arr, pi + 1, high); // Ordenar los elementos después de la partición
    }
}

int main() {
    int arr[] = {10, 80, 30, 90, 40, 50, 70};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    quickSort(arr, 0, n - 1); // Ordenar el arreglo usando QuickSort

    // Mostrar el arreglo ordenado
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
