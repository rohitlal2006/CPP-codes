#include<iostream>
using namespace std;
int binarySearch(int arr[], int n, int x) {
    int low = 0, high = n-1;
    while(low <= high) {
        int mid = (low + high) / 2;
        if(arr[mid] == x)
           return mid;
        else if (arr[mid] < x)
            low = mid + 1;
        else  
            high = mid -1;

    }
    return -1;
}
int main() {
    int n,x;
    cout << "enter size of array:";
    cin >> n;
    int arr[50];
    cout << "enter sorted array elements:";
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }
    cout << "enter element to search:";
    cin >> x;
    int result = binarySearch(arr, n, x);
    if(result == -1)
        cout << "element not found";
    else 
        cout << "elemnt found at index:" << result;
    return 0;
}