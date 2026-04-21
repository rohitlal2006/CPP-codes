#include<iostream>
using namespace std;
int main() {
    int arr[20], n;
    cout << "enter no of elements:\n";
    cin >> n;

    cout << "enter elements:\n";
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }
    int max = arr[0];
    int min = arr[0];
    for(int i=1; i<n; i++) {
        if(arr[i] > max)
            max = arr[i];

        if(arr[i] < min)
            min = arr[i];

    }
    cout << "Maximum element = " << max << endl;
    cout << "Minimum element = " << min << endl;
    return 0;


}