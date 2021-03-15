#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main() {
    int n;
    cin >> n;

    int a[1000], maxSum = INT_MIN, left=0, right=0;
    for(int i=0; i<n; i++) {
        cin >> a[i];
    }

    // Generate all subarrays
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            int currSum = 0;
            for(int k=i; k<=j; k++) {
               currSum+=a[k];
            }
            // maxSum = max(currSum, maxSum);
            if(currSum > maxSum) {
                maxSum = currSum;
                left = i;
                right = j;
            }
        }
    }

    cout << "Maximum sum of subarray is " << maxSum << "\n";
    cout << "The subarray is ";
    for(int i=left; i<=right;i++) {
        cout << a[i] << " ";
    }
    cout << "\n";
    
    return 0;
}
