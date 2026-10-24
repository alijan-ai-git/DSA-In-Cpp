#include <iostream>
using namespace std;

int main()
{
    int arr[4] = {5,2,8,1};
    int temp;
    for(int p = 1; p < 4; p++) {
        temp = arr[p];
        for (int i = p - 1; i >= 0; i--) {
            if (temp < arr[i]) {
                arr[i+1] = arr[i];
                arr[i] = temp;
            }
        }
    }
    for (int i = 0; i < 4; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}