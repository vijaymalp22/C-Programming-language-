#include <iostream>
using namespace std;
int main() {
    int a, b, ch;
    cout << "Enter two non-negative integers: ";
    cin >> a >> b;
    cout << "Choose operation: 1.Add 2.Subtract 3.Multiply 4.Divide: ";
    cin >> ch;

    switch (ch) {
        case 1: {
            int add = a + b;
            cout << "Addition is " << add;
            break;
        }
        case 2: {
            int sub = a - b;
            cout << "Subtraction is " << sub;
            break;
        }
        case 3: {
            int mul = a * b;
            cout << "Multiplication is " << mul;
            break;
        }
        case 4: {
            if (b != 0) {
                float div = static_cast<float>(a) / b;
                cout << "Division is " << div;
            } else {
                cout << "Error: Division by zero";
            }
            break;
        }
        default:
            cout << "Invalid choice";
    }
}