#include <iostream>
using namespace std;

int main() {
    int a;
    
    cout << "Enter the value of a: ";
    cin >> a;
    
    
    int n;
    if (a % 2 == 1) {
        n = a;  
    } else {
        n = a - 1;  
    }
    
    cout << "Output: ";
    
    
    for (int i = 1; i <= n; i++) {
        int odd_number = 2 * i - 1; 
        cout << odd_number;
        
        if (i < n) {
            cout << ", ";
        }
    }
    
    cout << endl;
    
    return 0;
}