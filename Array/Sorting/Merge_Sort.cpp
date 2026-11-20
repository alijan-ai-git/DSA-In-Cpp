#include <iostream>
using namespace std;

void merge(int *arr, int low, int mid, int high) {
    int n1 = mid - low + 1;
    int n2 = high - mid;
    int L[n1];
    int R[n2];

    for (int x = 0; x < n1; x++)
        L[x] = arr[low + x]; // low + x means the index of the left subarray, for example, if low = 0 and x = 0, then L[0] = arr[0], if low = 0 and x = 1, then L[1] = arr[1], only x is changing, low is fixed
        // only x can't be used because it will always start from 0, so we need to add low to it to get the correct index of the left subarray
        // suppose low = 2, then L[0] = arr[2], L[1] = arr[3], L[2] = arr[4], and so on, so we need to add low to x to get the correct index of the left subarray
    for (int y = 0; y < n2; y++)
        R[y] = arr[mid + 1 + y];

    int i = 0;
    int j = 0;
    int k = low;

    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(int *arr, int low, int high) {
    if (low < high) {
        int mid = (low + high) / 2;
        mergeSort(arr, low, mid);
        mergeSort(arr, mid + 1, high);
        merge(arr, low, mid, high);
    }
}

int main() {
    int arr[] = {12, 11, 13, 5, 6, 7};
    int arr_size = sizeof(arr) / sizeof(arr[0]);

    mergeSort(arr, 0, arr_size - 1);

    for (int i = 0; i < arr_size; i++)
        cout << arr[i] << " ";
    return 0;
}