// Program to find the smallest and largest number in the array
#include<iostream>
#include<climits>
using namespace std;

#define ll long long
#define ar array

int main() {
    // ios::sync_with_stdio(0);
    // cin.tie(0);

    int n, a[1000];
    cin >> n; // size of the array
    
    for(int i=0; i<n; i++) {
        cin >> a[i];
    }

    // Algorithm to find the smallest and largest number
    int largest = INT_MIN;
    int smallest = INT_MAX;

    for(int i=0; i<n; i++) {
        if(a[i]>largest) largest = a[i];
        if(a[i]<smallest) smallest = a[i];
    }

    cout << "Largest number in the array is " << largest << "\n";
    cout << "Smallest number in the array is " << smallest << "\n";

    return 0;
}
