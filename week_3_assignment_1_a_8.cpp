// Print first ‘n’ fibonacci numbers.
// Sample Input : 10
// Output :

// 1 1 2 3 5 8 13 21 34 55

#include<iostream>
using namespace std;
int main(){
    int n; //user input
    int fst_term=1; // two places behind present position
    int scd_term=1; // one placebehind present position
    int sum=0; // present position  // basically it is the 3rd term
    cout<<"Enter a number: ";
    cin>>n;
    for(int i = 0; i<n; i++){
        cout<<fst_term<<" ";
        sum = fst_term+scd_term;
        fst_term = scd_term; // first term will move to the next position, where earlier there was second term.
        scd_term = sum; // secind term will move to next position where earlier it was the sum or third term. 

    }
}