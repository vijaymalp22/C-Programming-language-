#include <iostream>
using namespace std;
int main(){
    int arr[2][2],i,j;
    cout<<"Enter the elements of 2D array:"<<endl;
    for( i=0;i<=1;i++){
        for(j=0;j<=1;j++){
            cin>>arr[i][j];
        }
        
    }
    cout<<"The elements of 2D array are:"<<endl;
    for( i=0;i<=1;i++){
        for(j=0;j<=1;j++){
            cout<<arr[i][j]<<" "<<ends;
        }
       
        cout<<endl;
}
}