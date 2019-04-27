#include <iostream>
using namespace std;

int main() {

    //at first we ask the amout of ints
    int n;  //amount of ints
    int i; //for the loop
    int max; //the max number
    cout<<"please tell us the amout of ints"<<endl;

    //inputing n
    cin>>n;

    //store it in a array
    int numbers[n];
    for (i = 0; i < n; i++) {
        cin>>numbers[i];
    }

    //loop in the array to find the gratest
    int greatest = 0;
    for( i=0; i<n; i++ ) {
        if ( numbers[i] > greatest ) {
            greatest = numbers[i];
        }
    }   

    cout<<greatest<<"is the greates number"<<endl;

    return 0;
}//MOUSA RAHIMI
