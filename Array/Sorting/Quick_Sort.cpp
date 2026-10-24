#include <iostream>
using namespace std;

int partition(int *arr, int low, int high) {
    int pivot = arr[high];
    int i = low - 1;
    int temp;
    for (int j = low; j <= high - 1; j++) {
        if (arr[j] <= pivot) {
            i = i + 1;
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    temp = arr[i + 1];
    arr[i + 1] = arr[high];
    arr[high] = temp;
    return i + 1;
}

void quickSort(int *arr, int low, int high) {
    if (low < high) {
        int p = partition(arr, low, high);
        quickSort(arr, low, p - 1);
        quickSort(arr, p + 1, high);
    }
}


int main() {
    int arr[5] = {35,17,49,37,15};
    int length = sizeof(arr) / sizeof(arr[0]);
    quickSort(arr, 0, length - 1);
    for (int i = 0; i < length; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}