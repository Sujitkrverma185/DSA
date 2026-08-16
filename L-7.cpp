//bitwise operator
#include<iostream>
using namespace std;
int main(){

    //& AND 
    int a=6,b=10,c=1;
    cout<<(a & b)<<endl;;

    // | OR
    cout<<(a | b)<<endl;

    //^ XOR
    cout<<(a ^ b)<<endl;

    //<< left shift
    cout<<( b << c)<<endl;

    //>> right shift
    cout<<(b >> c)<<endl;

    return 0;
}