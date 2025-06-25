#include <iostream>
#include <string>

using namespace std;

class Calculator {
private:
    double a;
    double b;
    string operation;

public:
    
    Calculator(double a, double b, string operation) {
        this->a = a;
        this->b = b;
        this->operation = operation;
    }
    
    
    double calculate() {
        if (operation == "addition" || operation == "+") {
            return addition();
        }
        else if (operation == "subtraction" || operation == "-") {
            return subtraction();
        }
        else if (operation == "multiplication" || operation == "*") {
            return multiplication();
        }
        else if (operation == "division" || operation == "/") {
            return division();
        }
        else {
            cout << "Invalid operation" << endl;
            return 0.0;
        }
    }
    
   
    void displayInput() {
        cout << "a = " << a << ", b = " << b << ", operation = " << operation << endl;
    }

private:
    
    double addition() {
        return a + b;
    }
    
    double subtraction() {
        return a - b;
    }
    
    double multiplication() {
        return a * b;
    }
    
    double division() {
        if (b == 0) {
            cout << "Error: Division by zero is not allowed" << endl;
            return 0;
        }
        return a / b;
    }
};

int main() {
    char continueCalc = 'y';
    
    cout << "=== Calculator ===" << endl;
    cout << " Use symbols: +, -, *, /" << endl << endl;
    
    while (continueCalc == 'y' || continueCalc == 'Y') {
        double a, b;
        string operation;
        
        cout << "Enter first number (a): ";
        cin >> a;
        
        cout << "Enter second number (b): ";
        cin >> b;
        
        cout << "Enter operation: ";
        cin >> operation;
        
        Calculator calc(a, b, operation);
        calc.displayInput();
        cout << "Result: " << calc.calculate() << endl << endl;
        
        cout << "Do you want to perform another calculation? (y/n): ";
        cin >> continueCalc;
        cout << endl;
    }
    return 0;
}