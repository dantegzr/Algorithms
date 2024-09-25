#include <iostream>
#include <vector>

using namespace std;

void mySwap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

void bubbleSort(vector<int> & vec){
    int n = vec.size();
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n -1 - i; j++){
            if (vec[j] > vec[j+1]){
                mySwap(vec[j],vec[j+1]);
            }
        }
    }
};

int main() {
    vector<int> vec; 
    int num;
    for (int i = 0; i < 7; i++) {
        cout << "Ingresa el numero " << i + 1 << ": ";
        cin >> num;
        vec.push_back(num); 
    }

    bubbleSort(vec);

    cout << "Los numeros ordenados son: ";
    for (int i = 0; i < vec.size(); i++) {
        cout << vec[i] << " ";
    }
    cout << endl;

    cout << "Numero menor: " << vec.front() << endl;
    cout << "Numero mayor: " << vec.back() << endl;

    return 0;
}

