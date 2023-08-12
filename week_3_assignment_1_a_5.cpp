// WAP to print the sum of all the even digits of a given number.
// Sample Input : 4556
// Output: 10
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a desired numberr: ";
    cin>>n;
    int x = n; //number store krne k liye
    int last = 0; //last digit ko store krne k liye
    int sum = 0; // last digit ka sum store krne k liye

    while (n>0)
    {
        last = n%10;
        if(last%2==0) sum += last;
        n = n/10;
        // cout<<last<<endl;
    }
    cout<<endl<<"the sum of the even digits of "<<x<<" is "<<sum;
}
