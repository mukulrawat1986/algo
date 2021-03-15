// Modified Kadane's algorithm, works for all negative numbers as well
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

    int max_so_far = a[0];
    int curr_max = a[0];
    
    int s=0, e=0, start=0, end=0;

    for(int i=1; i<n; i++) {
        // curr_max = max(a[i], a[i]+curr_max);
        // max_so_far = max(curr_max, max_so_far);
        if (a[i] > a[i]+curr_max) {
            curr_max = a[i];
            s=i; e=i;
        } else {
            curr_max = a[i]+curr_max;
            e=i;
        }


        if (curr_max > max_so_far) {    
            max_so_far = curr_max;
            start=s;
            end=e;
        }
    }

    cout << "Maximum sum is " << max_so_far << "\n";
    for(int i=start; i<=end; i++) cout << a[i] << " ";
    cout << "\n";

    return 0;
}
