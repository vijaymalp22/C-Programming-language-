#include <iostream>
using namespace std;    
int main() {
    int a, b, ch;
    cout << "Enter two non-negative integers: ";
    cin >> a >> b;
    cout << "Choose operation: 1.Add 2.Subtract 3.Multiply 4.Divide: ";
    cin >> ch;

    if (ch == 1) {
        int add = a + b;
        cout << "Addition is " << add;
    } 
    else {
        if (ch == 2) {
            int sub = a - b;
            cout << "Subtraction is " << sub;
        } 
        else {
            if (ch == 3) {
                int mul = a * b;
                cout << "Multiplication is " << mul;
            } 
            else {
                if (ch == 4) {
                    if (b != 0) {
                        float div = a / b;
                        cout << "Division is " << div;
                    } 
                    else {
                        cout << "Error: Division by zero";
                    }
                } 
                else {
                    cout << "Invalid choice";
                }
            }
        }
    }
}