#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main() {
    int n;
    cin >> n;

    int a[1000], maxSum=INT_MIN, left=0, right=0;
    for(int i=0; i<n; i++) {
        cin >> a[i];
    }

    // calculate the csum
    int csum[1000] {};
    csum[0] = a[0];
    for(int i=1; i<n; i++) {
        csum[i] = csum[i-1] + a[i];
    }

    for(int i=0; i<n; i++) {
        for(int j=i; j<n; j++) {
            int currSum = 0;
            if (i!=0) {
                currSum = csum[j] - csum[i-1];
            } else {
                currSum = csum[j];
            }

            if (currSum > maxSum) {
                maxSum = currSum;
                left = i;
                right = j;
            }
        }
    }

    cout << "The maximum sum of subarray is " << maxSum << "\n";
    cout << "Maxium sum subarray is ";
    for(int i=left; i<=right; i++) {
        cout << a[i] << " ";
    }
    cout << "\n";
    return 0;
}
