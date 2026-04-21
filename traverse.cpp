#include<iostream>
using namespace std;
int main() {
    int n;
    cout << "enter size of array:";
    cin >> n;
    int arr[50];
    cout << "enter array elements:";
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }
    cout << "array elements are:";
    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";

    }
    return 0;
}