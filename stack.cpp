#include<iostream>
#include<stack>
using namespace std;

int main() {
    stack<int> mystack;   // fixed variable name

    mystack.push(0);
    mystack.push(1);
    mystack.push(2);

    while(!mystack.empty()) {
        cout << mystack.top() << " ";   // fixed quotes
        mystack.pop(); 
    }

    return 0;
}