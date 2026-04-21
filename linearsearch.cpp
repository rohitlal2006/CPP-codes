#include<iostream>
using namespace std;
int main() {
    int n, x;
    cout << "enter size of array:";
    cin >> n;
    int arr[50];
    cout << "enter array elements:";
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }
    cout << "enter element to search:";
    cin >> x;
    int found = 0;
    for(int i=0; i<n; i++) {
        if(arr[i] == x) {
            cout << "element found at index :" << i;
            found = 1;
            break;
        }

    }
    if(found == 0) {
        cout << " element not found:";
    }
    return 0;

}