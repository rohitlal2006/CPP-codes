#include<iostream>
using namespace std;
void CountEvenOdd(int arr[], int size) {
    int even = 0, odd = 0;
    for(int i=0; i<size; i++) {
        if(arr[i] % 2 == 0)
            even ++ ;
        else 
            odd ++;
    }
    cout << "Even numbers:" << even << endl;
    cout << "Odd numbers:" << odd << endl;
}
int main() {
    int n;
    cout << "enter no of elements:";
    cin >> n;
    int arr[n];
    cout << "enter elements of array:";
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }
    CountEvenOdd(arr, n);
    return 0;
}