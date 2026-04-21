#include<iostream>
using namespace std;
int main() {
    int arr[5] = {1, 2, 2, 3, 4, };
    int element, count = 0;
    cout << "entered an element:";
    cin >> element;
    for(int i=0; i<5; i++) {
        if(arr[i] == element) count ++;
    }
    cout << "Frequency of entered element (" << element<< ") is :" << count;
    return 0;


}

