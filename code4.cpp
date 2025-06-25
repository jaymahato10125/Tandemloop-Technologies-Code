#include <iostream>
using namespace std;

int main() {
    const int MAX_SIZE = 1000;
    int arr[MAX_SIZE];
    int count = 0;
    char ch;
    int num = 0;
    bool readingNumber = false;

    cout << "Enter the numbers (space-separated):\n";

    
    while (cin.get(ch) && ch != '\n') {
        if (ch >= '0' && ch <= '9') {
            num = num * 10 + (ch - '0');
            readingNumber = true;
        } else if (ch == ' ' && readingNumber) {
            arr[count++] = num;
            num = 0;
            readingNumber = false;
        }
    }
    if (readingNumber) {
        arr[count++] = num; 
    }

    int counts[10] = {0};

    for (int i = 1; i <= 9; i++) {
        for (int j = 0; j < count; j++) {
            if (arr[j] % i == 0) {
                counts[i]++;
            }
        }
    }

    
    cout << "{";
    for (int i = 1; i <= 9; i++) {
        cout << i << ": " << counts[i];
        if (i != 9) cout << ", ";
    }
    cout << "}" << endl;

    return 0;
}