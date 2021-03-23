#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main() {

    int n;
    cin >> n;

    int a[1000];
    for(int i=0; i<n; i++) {
        cin >> a[i];
    }

/*

    // generate all pairs
    for(int i=0; i<n-1; i++) {
        for(int j=i+1; j<n; j++) {
            cout << a[i] << ", " << a[j] << "\n";
        }
    }

*/

    // Generate all subarrays
    for(int i=0; i<n; i++) {
        for(int j=i; j<n; j++) {
            // elements of subarray (i, j)
            for(int k=i; k<=j; k++) {
                cout << a[k] << " ";
            }
            cout << "\n";
        }
    }

    return 0;
}
