#include <iostream>
#include <vector>
using namespace std;

void merge(int arr[], int si, int mid, int ei) {
    int i = si, j = mid + 1;
    vector<int> v;

    while (i <= mid && j <= ei) {
        if (arr[i] <= arr[j]) {
            v.push_back(arr[i++]);
        } else {
            v.push_back(arr[j++]);
        }
    }

    while (i <= mid) {
        v.push_back(arr[i++]);
    }

    while (j <= ei) {
        v.push_back(arr[j++]);
    }

    // copy back to original array
    for (int k = 0; k < v.size(); k++) {
        arr[si + k] = v[k];
    }
}

void split(int arr[], int si, int ei) {
    if (si >= ei) return;

    int mid = si + (ei - si) / 2;
    split(arr, si, mid);
    split(arr, mid + 1, ei);
    merge(arr, si, mid, ei);
}

int main() {
    int arr[] = {1, 3, 6, 5, 8, 9, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    split(arr, 0, n - 1);

    cout << "Sorted array:\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
