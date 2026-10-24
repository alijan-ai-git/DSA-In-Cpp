#include <iostream>
using namespace std;

void merge(int *arr, int low, int mid, int high) {
    int i = low;
    int j = mid + 1;
    int k = 0;
    while (i <= mid && j <= high) {
        if (arr[i] < arr[j]) {
            arr[k] = arr[i];
            k++;
            i++;
        }
        else {
            arr[k] = arr[j];
            k++;
            j++;
        }
    }
    while (i <= mid) { // this loop is for the case when the left subarray has remaining elements like in the case of [1, 3, 5] and [2, 4], after merging we will have [1, 2, 3, 4, 5] but if we don't have this loop then we will have [1, 2, 3, 4] which is not correct.
        arr[k] = arr[i];
        k++;
        i++;
    }
    while (j <= high) { // this loop is for the case when the right subarray has remaining elements like in the case of [1, 3] and [2, 4, 5], after merging we will have [1, 2, 3, 4, 5] but if we don't have this loop then we will have [1, 2, 3, 4] which is not correct.
        arr[k] = arr[j]; // how it works: we have two subarrays, one is left subarray and the other is right subarray. We are merging these two subarrays into a single sorted array. We are using three pointers, i, j and k. i is for the left subarray, j is for the right subarray and k is for the merged array. We are comparing the elements of the left and right subarrays and putting the smaller element into the merged array. If there are remaining elements in the left or right subarray, we are putting them into the merged array as well.
        k++;
        j++;
    }
}


void mergeSort(int *arr, int low, int high) {
    if (low < high) { // this condition is for the case when the array has only one element, in that case we don't need to sort it because it is already sorted. So we will return from the function
        int mid = (low + high) / 2;
        mergeSort(arr, low, mid);
        mergeSort(arr, mid + 1, high);
        merge(arr, low, mid, high);
    }
}

int main() {
    int arr[] = {12, 11, 13, 5, 6, 7};
    int arr_size = sizeof(arr) / sizeof(arr[0]);

    cout << "Given array is \n";
    for (int i = 0; i < arr_size; i++)
        cout << arr[i] << " ";
    cout << endl;

    mergeSort(arr, 0, arr_size - 1);

    cout << "\nSorted array is \n";
    for (int i = 0; i < arr_size; i++)
        cout << arr[i] << " ";
    cout << endl;
    return 0;
}