#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main() {
    int n, a[1000];
    cin >> n;
    for(int i=0; i<n; i++) cin >> a[i];
    sort(a, a+n);

    int key;
    cin >> key;

    int l=0, r=n-1;
    while(l<r) {
        if (a[l] + a[r] == key) {
            cout << a[l] << " " << a[r] << "\n";
            break;
        } else if (a[l] + a[r] < key) {
            l++;
        } else {
            r--;
        }
    }

    if (l>=r) cout << "No such pair is possible\n";

    return 0;
}
