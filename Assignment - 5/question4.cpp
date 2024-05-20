#include <iostream>
using namespace std;
int main(){
    int n;
    cout<< "Enter the value till where you want the AP: ";
    cin>>n;
    int a = 4;
    cout<<a<<" ";
    for(int i=1; i<n; i++){
        a = a + 3;
        cout<< a << " ";
    }
}