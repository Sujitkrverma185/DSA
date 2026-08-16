// //sum of number from 1 to N.
// #include<iostream>
// using namespace std;
// int main(){
//     int sum=0;
//     int n=5;
//     for(int i=1; i<=n; i++){
//         sum+=i;
//     }
//     cout<<"sum="<<sum;
//     return 0;
// }

//sum of all odd number from 1 to N.
// #include<iostream>
// using namespace std;
// int main(){
//     int n=7;
//     int sum=0; 
//     for( int i=1; i<=n; i++){
//         if(i%2!=0){
//             sum+=i;
//         }
//     }
//     cout<<"sum="<<sum;
// }

//check if a number is prime or not
#include<iostream>
using namespace std;
int main(){
    int n=11;
    bool isPrime = true;
    for(int i=2; i<=n-1; i++){
        if(n%i==0){
            isPrime = false;
        }
    }
    if(isPrime==true){
        cout<<n<<" is prime no."<<endl;
    }
    else{
        cout<<n<<" is not prime no."<<endl;
    }
    return 0;
}