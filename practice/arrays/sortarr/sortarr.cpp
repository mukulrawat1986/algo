// Using the inbuilt sort function of c++
#include <iostream>
#include <algorithm>
using namespace std;

#define ll long long
#define ar array

// define a comparator function
bool compare(int a, int b) {
    return a < b;
}

int main() {
    // ios::sync_with_stdio(0);
    // cin.tie(0);

    int n;
    cin >> n;

    int a[1000];
    for(int i=0; i<n; i++) {
        cin >> a[i];
    }

    // Sort an array using sort function
    sort(a, a+n, compare);

    // print the array
    for(int i=0; i<n; i++) cout << a[i] << "\n";
    return 0;
}
