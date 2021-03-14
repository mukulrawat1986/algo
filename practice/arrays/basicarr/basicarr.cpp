#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main() {
    //ios::sync_with_stdio(0);
    //cin.tie(0);

    // initialize all elements of array as 0 and print them
    int a[10] {};
    for(int &i: a) cout << i << "\n";

    cout << "\n";

    // initialize 3 elements of array and set rest to 0
    int b[10] {1,2,3};
    for(int &i: b) cout << i << "\n";

    // take as input first 5 elements of a
    for(int i=0; i<5; i++) cin >> a[i];

    // print the elements of a
    for(int &i: a) cout << i << "\n";

    return 0;
}
