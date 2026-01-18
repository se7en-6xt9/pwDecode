#include <iostream>
#include <string>
using namespace std;

// Merge two sorted halves
void merge(string arr[], int si, int mid, int ei) {
    int n1 = mid - si + 1;
    int n2 = ei - mid;

    string left[n1], right[n2];

    for (int i = 0; i < n1; i++)
        left[i] = arr[si + i];
    for (int j = 0; j < n2; j++)
        right[j] = arr[mid + 1 + j];

    int i = 0, j = 0, k = si;

    while (i < n1 && j < n2) {
        if (left[i] < right[j]) {
            arr[k++] = left[i++];
        } else {
            arr[k++] = right[j++];
        }
    }

    while (i < n1)
        arr[k++] = left[i++];

    while (j < n2)
        arr[k++] = right[j++];
}

// Merge Sort function
void mergeSort(string arr[], int si, int ei) {
    if (si >= ei)
        return;

    int mid = si + (ei - si) / 2;

    mergeSort(arr, si, mid);
    mergeSort(arr, mid + 1, ei);
    merge(arr, si, mid, ei);
}

// Driver code
int main() {
    string arr[] = {"sun", "earth", "mars", "mercury"};
    int n = 4;

    mergeSort(arr, 0, n - 1);

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}
