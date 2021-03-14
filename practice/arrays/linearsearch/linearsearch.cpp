// linear search in arrays
// search for 'key' in the array
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main() {
    //ios::sync_with_stdio(0);
    //cin.tie(0);

    int n, key;
    cin >> n;

    int a[1000];
    for(int i=0; i<n; i++) {
        cin>>a[i];
    }

    // Ask for the element we want to search
    cout << "Enter the element you want to search: \n";
    cin >> key;

    // find out the index of that element by traversing the array
    int i;
    for(i=0; i<n; i++) {
        if (a[i] == key) {
            break;
        }
    }

    if (i!=n) {
        cout << "Key found at the " << i <<"th index\n";
    } else {
        cout << "Key " << key << " not present in the array\n";
    }

    return 0;
}
