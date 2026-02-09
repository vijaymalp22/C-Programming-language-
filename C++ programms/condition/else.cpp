#include <iostream>
using namespace std;
int main() {
    int a,b,max;
    cout << "Enter two noo.. integer: ";
    cin >> a>>b;

    // // Check if the number is positive, negative, or zero
    // if (number > 0) {
    //     cout << number << " is a positive number." << endl;
    // } else if (number < 0) {
    //     cout << number << " is a negative number." << endl;
    // } else {
    //     cout << "The number is zero." << endl;
    // }

    // return 0;

//turnary opretet
max = (a > b) ? a : b;
cout<<max;
}
    