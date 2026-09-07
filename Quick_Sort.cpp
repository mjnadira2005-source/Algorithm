// In the name of Allah, who is the most merciful.

#include <bits/stdc++.h>
using namespace std;

int partition(int A[], int l, int h) {
    int pivot = A[l];
    int i = l;
    int j = h;
    while (i < j) {
         while (A[i] < pivot) {
            i++;
        }
        while (A[j] > pivot) {
            j--;
        }
        if (i < j) {
            swap(A[i], A[j]);
            i++;
            j--;
        }
    }
    swap(A[l], A[j]);
    return j;
}

void quick_sort(int A[], int l, int h) {
    if (l < h) {
        int j = partition(A, l, h);
        quick_sort(A, l, j - 1);
        quick_sort(A, j + 1, h);
    }
}

int main() {
    int n, i;
    cin >> n;
    int a[n];
    for (i = 0; i < n; i++) {
        cin >> a[i];
    }
    quick_sort(a, 0, n - 1);
    for (i = 0; i < n; i++) {
        cout << a[i] << " ";
    }

    return 0;
}