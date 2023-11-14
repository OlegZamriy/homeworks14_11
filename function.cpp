#include "function.h"
#include <cstdlib>
#include <ctime>
#include <algorithm>

void FillArray(int arr[], int size) {
    srand(static_cast<unsigned>(time(0)));
    for (int i = 0; i < size; ++i) {
        arr[i] = rand() % 100; 
    }
}

void ShowArray(int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int FindMin(int arr[], int size) {
    int minVal = arr[0];
    for (int i = 1; i < size; ++i) {
        if (arr[i] < minVal) {
            minVal = arr[i];
        }
    }
    return minVal;
}

int FindMax(int arr[], int size) {
    int maxVal = arr[0];
    for (int i = 1; i < size; ++i) {
        if (arr[i] > maxVal) {
            maxVal = arr[i];
        }
    }
    return maxVal;
}

void SortArray(int arr[], int size) {
    sort(arr, arr + size);
}

void EditArray(int arr[], int size, int index, int newValue) {
    if (index >= 0 && index < size) {
        arr[index] = newValue;
    }
}
