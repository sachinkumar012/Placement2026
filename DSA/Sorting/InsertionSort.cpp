// Always take element and place it in the current position
#include <bits/stdc++.h>
using namespace std;

void Insertion_sort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int j = i;
        while (j > 0 && arr[j - 1] > arr[j]) {
            swap(arr[j], arr[j - 1]);   
            j--;
        }
    }
}

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    int arr[n];
    cout << "Enter element of array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    Insertion_sort(arr, n);
    cout << "Element are: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}
