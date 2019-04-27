#include <iostream>
using namespace std;

int main () {
    float a,b,c;
    float result;
    cout<<"please give us 3 numbers to compare for min of them"<<endl;
    cin>>a;
    cin>>b;
    cin>>c;

    if(a < b && a < c) {
        result = a;
    }

    if(b < a && b < c) {
        result = b;
    }

    if(c < b && c < a) {
        result = c;
    }
    cout<<result<<"is the smallest number"<<endl;
    return 0;
}
//MOUSA RAHIMI