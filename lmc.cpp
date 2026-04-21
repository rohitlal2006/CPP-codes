// removing duplicates array

#include<iostream>
using namespace std;
int main() {
    int arr[10], i, j, k, n=5;
    cout << "enter 5 elements:\n";
    for(int i=0; i<n; i++)
       cin >> arr[i];
    for(int i=0; i<n; i++) {
        for(int j=i+1; j<n; j++) {
            if(arr[i] == arr[j]) {
                for(k=j; k<n-1; k++)
                   arr[k] = arr[k+1];
                n--;
                j--;
            }
        }
    }
    cout << "array after removing duplicates:\n";
    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}