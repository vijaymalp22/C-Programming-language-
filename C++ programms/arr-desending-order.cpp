#include <iostream>
using namespace std;

int main() {
    int a[5] = {5, 2, 9, 1, 3};
    int i, j, temp;

    for(i = 0; i < 5; i++) {
        for(j = i + 1; j < 5; j++) {
            if(a[i] < a[j]) {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    cout << "Descending Order: ";
    for(i = 0; i < 5; i++)
        cout << a[i] << " ";

    return 0;
}
