//  Print the factorials of first ‘n’ numbers
// Sample Input : 10
// Output :
// 1
// 2
// 6
// 24
// 120
// 720
// 5040
// 40320
// 362880
// 3628800

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number for factorial: ";
    cin>>n;
    int fact =1;
    for(int i = 1; i<=n; i++){
        fact*=i;
        if(n==0) cout<<1<<endl;
        else cout<<fact<<endl;
    }

}