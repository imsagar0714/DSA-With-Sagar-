#include <bits/stdc++.h>
using namespace std;

// Heapify a subtree rooted at index parent, size = n
void heapify(vector<int>& heap, int i, int n) {
    while (i < n) {
        int l = 2 * i + 1;
        int r = 2 * i + 2;
        int largest = i;
        if (l < n && heap[largest] < heap[l]) {
            largest = l;
        }
        if (r < n && heap[largest] < heap[r]) {
            largest = r;
        }
        if (largest != i) {
            swap(heap[i], heap[largest]);
            i = largest;   // move down
        }
        else break;
    }
}
// Main heap sort function
void heapSort(vector<int>& arr) {
    int n = arr.size();
    // Step 1: Build max heap
    for(int i = n/2 - 1; i >= 0; i--) {
        heapify(arr, i, n);
    }
    // Step 2: Extract elements one by one
    for(int i = n - 1; i > 0; i--) {
        swap(arr[0], arr[i]);     // move max to end
        heapify(arr, 0, i);       
    }
}

int main() {
    vector<int> v = {9,6,1,19,3,2,8,12,5};

    heapSort(v);

    for(int x : v)
        cout << x << " ";
}
