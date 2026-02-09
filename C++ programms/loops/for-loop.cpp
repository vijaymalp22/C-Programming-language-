// #include <iostream>
// using namespace std;
// int main() {
//     int n;
//     cout << "Enter a positive integer: ";
//     cin >> n;

//     cout << "Numbers from 1 to " << n << " are:" << endl;
//     for (int i = 1; i <= n; i++) {
//         cout << i << endl;
//     }

//     return 0;
// }

// not a print valule
#include <iostream>
using namespace std;
int main() {
    int i,j,n;
    cin>>n;

    for ( i = 1; i <= n; i++){  
        for(j=1;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
                 
    }
    return 0;
}
