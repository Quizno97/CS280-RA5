#include <iostream>

using namespace std;

void reverse(int n){
    if(n <= 0) {
        return;
    }
    else{
        cout << n % 10;
        reverse(n / 10);
    }
}
int main() {
    int num;
    cout << "Enter any postive integer: ";
    cin>>num;
    cout<<"Your entered digit: "<<num<<endl;
    cout<<"\nReversed order of digits: "<<endl;
    reverse(num);
    cout<<endl;
    return 0;
}
