#include <iostream>

using namespace std;

void swap(int* x, int* y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

void bubble_sort(int arr[], int size) {

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}

void print_array(int arr[], int size) {

    for (int i = 0; i < size; i++) {
        cout << arr[i] << endl;
    }
}
int main() {

    int size;
    int arr[size];

    cout << "Enter size of the array:";
    cin >> size;

    cout << "Enter elements of the array: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    bubble_sort(arr, size);
    print_array(arr, size);

    return 0;
}