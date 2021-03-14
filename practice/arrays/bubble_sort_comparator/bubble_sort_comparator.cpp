// Bubble sort algorithm with a comparator
#include <iostream>
using namespace std;

#define ll long long
#define ar array

bool compare(int a, int b) {
    // cout << "comparing " << a << " and " << b << "\n";
    return a < b; // ascending order
    // return a > b; // descending order
}

void bubble_sort(int a[], int n, bool (&cmp)(int a, int b)) {
    for (int i=0; i<n-1; i++) {
        for(int j=i+1; j<n; j++) {
            if (!cmp(a[i], a[j])) {
                swap(a[i], a[j]);
            }
        }
    }
}

int main() {

    int n;
    cin >> n;

    int a[1000];
    for(int i=0; i<n; i++) {
        cin >> a[i];
    }

    bubble_sort(a, n, compare);

    // print the array
    for(int i=0; i<n; i++) {
        cout << a[i] << " ";
    }
    cout << "\n";
    return 0;
}
