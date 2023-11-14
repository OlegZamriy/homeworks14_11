#include "function.h"

int main() {
    const int size = 5;
    int arr[size];

     FillArray(arr, size);
    cout << "Original Array: ";
    ShowArray(arr, size);

    cout << "Min Value: " << FindMin(arr, size) << endl;
    cout << "Max Value: " << FindMax(arr, size) << endl;

    SortArray(arr, size);
    cout << "Sorted Array: ";
    ShowArray(arr, size);

    int index;
    int newValue;
    cout << "Enter index to edit: ";
    cin >> index;
    cout << "Enter new value: ";
    cin >> newValue;

    EditArray(arr, size, index, newValue);
    cout << "Array after editing: ";
    ShowArray(arr, size);

    return 0;
}
