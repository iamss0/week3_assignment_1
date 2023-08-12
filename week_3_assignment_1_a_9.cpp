// Write a program to print out all Armstrong numbers between 1 and 500. If the sum of cubes of
// each digit of the number is equal to the number itself, then the number is called an Armstrong
// number. For example, 153 = ( 1 * 1 * 1 ) + ( 5 * 5 * 5 ) + ( 3 * 3 * 3 )
// Output :
// 1
// 153
// 370
// 371
// 407

#include<iostream>
using namespace std;
int main(){
    int last =0;
    int cube_last = 0;
    int n =1;
    for ( ; n<=500;n++)
    {
        int x = n;
        int sum_cube =0;
        while (x > 0){
            last = x%10;
            cube_last = last*last*last;
            sum_cube+=cube_last;
            x/=10;
        }
        if(n == sum_cube) cout<<n<<endl;
    }
    

}