#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int a[10000], n;

    while(1){
        cin >> n;
        if (n==0) break;

        for(int i=0; i<n; i++) cin >> a[i];

/*
        int curr_sum = a[0];
        int max_so_far = a[0];

        for(int i=1; i<n; i++) {
            curr_sum = max(a[i], a[i]+curr_sum);
            max_so_far = max(curr_sum, max_so_far);
        }

        if (max_so_far <= 0) cout << "Losing streak.\n";
        else cout << "The maximum winning streak is " << max_so_far << ".\n";
    }
*/

        int sum=0, ans=a[0];
        for(int i=0; i<n; i++) {
            sum += a[i];
            ans = max(ans, sum);
            sum = max(sum, 0);
        }
        if (sum <= 0) cout << "Losing streak.\n";
        else cout << "The maximum winning streak is " << ans << ".\n";
    }
    return 0;
}
