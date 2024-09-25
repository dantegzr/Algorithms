#include <iostream>
#include <vector>

using namespace std;

void insertionSort(vector<int>& vec) {
    int n = vec.size();

    for (int i = 1; i < n; i++) { 
        int key = vec[i];
        int j = i - 1;

        while (j >= 0 && vec[j] > key) {
            vec[j + 1] = vec[j];
            j = j - 1;
        }
        vec[j + 1] = key;
    }
}

int main() {
    vector<int> vec = {5, 2, 4, 6, 1, 3};

    insertionSort(vec);

    for (int i = 0; i < vec.size(); i++) {
        if (i > 0) {
            cout << ",";
        }
        cout << vec[i];
    }

    return 0;
}
