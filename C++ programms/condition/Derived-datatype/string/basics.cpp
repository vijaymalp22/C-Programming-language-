#include <iostream>
#include <string.h>
using namespace std;    
int main(){
    char str[]="Vijaymal";
    char str1[]="prajapati";
    cout<<str<<endl;
    int r=strlen(str);
    strrev(str);
    cout<<"Reversed string is: "<<str<<endl;
    cout<<"Length of string is: "<<r<<endl;
    // strcat(str,str1);
    cout<<str;
    strcpy(str1,str);
    cout<<endl<<str1;
    return 0;
}