#include <iostream>
#include <vector>

using namespace std;

void merge(vector<int>& leftArray, vector<int>& rightArray, vector<int>& array) {
    int leftSize = leftArray.size();
    int rightSize = rightArray.size();

    int i = 0, l = 0, r = 0;

    while (l < leftSize && r < rightSize) {
        if (leftArray[l] < rightArray[r]) {
            array[i] = leftArray[l];
            i++;
            l++;
        } else {
            array[i] = rightArray[r];
            i++;
            r++;
        }
    }

    while (l < leftSize) {
        array[i] = leftArray[l];
        i++;
        l++;
    }

    while (r < rightSize) {
        array[i] = rightArray[r];
        i++;
        r++;
    }
}

void mergeSort(vector<int>& array) {
    int n = array.size();
    if (n <= 1) return;

    int center = n / 2;

    vector<int> leftArray(array.begin(), array.begin() + center);
    vector<int> rightArray(array.begin() + center, array.end());

    mergeSort(leftArray);
    mergeSort(rightArray);

    merge(leftArray, rightArray, array);
}

int main() {
    vector<int> array = {12, 3, 7, 9, 14, 6, 11, 2};

    mergeSort(array);

    for (int num : array) {
        cout << num << ",";
    }
}

