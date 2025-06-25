#include <iostream>
using namespace std;

int main() {
    int a;
    
    cout << "Enter the number: ";
    cin >> a;
    
    cout << "Output: ";
    
    for (int i = 1; i <= a; i++) {
        int odd_num = 2 * i - 1; 
        cout << odd_num;
        
        if (i < a) {
            cout << ", ";
        }
    }
    
    cout << endl;
    
    return 0;
}