#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main() {

    int n, a[1000];
    cin >> n;
    for(int i=0; i<n; i++) cin >>a[i];

    int sum=0, ans=a[0];
    for(int i=0; i<n; i++) {
        sum += a[i];
        ans = max(sum, ans);
        sum = max(sum, 0);
    }

    cout << ans << "\n";
    return 0;
}
