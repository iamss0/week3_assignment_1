#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a desired numberr: ";
    cin>>n;
    int x = n; //number store krne k liye
    int last = 0; //last digit ko store krne k liye
    int sum = 0; // last digit ka sum store krne k liye
    int rev = 0; //reverse ki digits store krne k liye

    while (n>0)
    {
        last = n%10;
        sum += last;
        rev*=10;
        rev+=last;
        n = n/10;
        // cout<<last<<endl;
    }
    cout<<endl<<"the sum of the digits of "<<x<<" is "<<sum<<" and the reverse is "<< rev;
}
