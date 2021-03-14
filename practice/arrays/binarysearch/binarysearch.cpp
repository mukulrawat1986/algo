// Binary Search algorithm
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int binary_search(int a[], int n, int key) {
    int start = 0, end = n-1;

    while(start <= end) {
        int mid = (start + end)/2; 

        if (a[mid] == key) {
            return mid;
        } else if (a[mid] > key) {
            end = mid - 1;
        } else {
            start = mid + 1;
        }
    }

    return -1;
}

int main() {
    // ios::sync_with_stdio(0);
    // cin.tie(0);
    int n, key;
    cin >> n; // size of array

    int a[1000];
    for(int i=0; i<n; i++) {
        cin >>a[i];
    }

    // sort the array
    sort(a, a+n);

    cout << "Enter the element you want to find in the array:\n";
    cin >> key;

    int res = binary_search(a, n, key);
    if (res == -1) {
        cout << "Key " << key << " is not in the array\n";
    } else {
        cout << "Key " << key << " found at " << res << "th index\n";
    }

    return 0;
}
