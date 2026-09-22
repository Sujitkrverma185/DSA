// //WAF to check prime or non prime 
// #include<iostream>
// #include<string>
// using namespace std;
// string isPrime(int n){
//     for(int i=2; i*i<=n; i++){
//         if(n%i==0){
//             return "non prime";
//         }
//     }
//     return "prime";
// }

// int main(){
//     int n=47;
//     cout<<isPrime(n);
//     return 0;
// }

// //WAF to print prime number from 2 to N.
// #include<iostream>
// using namespace std;

// void isPrime(int N){
//     for(int n=2; n<=N; n++){
//         bool isPrime = true;
//         for(int i=2; i*i<=n; i++){
//             if(n%i==0){
//                 isPrime = false;
//                 break;
//             }
//         }
//         if(isPrime){
//             cout<<n<<"is prime number.\n";
//         }
//     }
// }

// int main(){
//     int n=11;
//     isPrime(n);
//     return 0;
// }

// //sieve of Eratosthenes is optimal approach of prime number 2 to N.
// #include<iostream>
// #include<vector>
// using namespace std;
// int countPrimes(int n){
//     vector<bool> isPrime(n+1,true);
//     int count=0;
//     for(int i=2; i<n; i++){
//         if(isPrime[i]){
//             count++;
//             for(int j=i*2; j<n; j=j+i){
//                 isPrime[j]=false;
//             }
//         }
//     }
//     return count;
// }

// int main(){
//     int n=50;
//     cout<<"total count of Prime number: "<<countPrimes(n);
//     return 0;
// }

// //sieve of Eratosthenes is optimal approach of prime number 2 to N.
// #include<iostream>
// #include<vector>
// using namespace std;
// void countPrimes(int n){
//     vector<bool> isPrime(n+1,true);
//     int count=0;
//     for(int i=2; i<n; i++){
//         if(isPrime[i]){
//             count++;
//             for(int j=i*2; j<n; j=j+i){
//                 isPrime[j]=false;
//             }
//         }
//         if(isPrime[i]){
//             cout<<i<<" is prime number.\n";
//         }
//     }
//     cout<<"total count: "<<count;
// }

// int main(){
//     int n=50;
//     countPrimes(n);
//     return 0;
// }

// //digits in a number.
// #include<iostream>
// using namespace std;
// void digits(int n){
//     while(n!=0){
//         int digit=n%10;
//         cout<<digit<<endl;
//         n=n/10;
//     }
// }
// int main(){
//     int n=3568;
//     digits(n);
//     return 0;
// }


// //WAF to check is an armstrong number.
// #include<iostream>
// using namespace std;
// bool armstrongNumber(int n){
//     int copyN=n;
//     int sumOfCube=0;
//     while(n!=0){
//         int digit=n%10;
//         sumOfCube+=(digit*digit*digit);
//         n=n/10;
//     }
//     return copyN==sumOfCube;

// }

// int main(){
//     int n=153;
//     if(armstrongNumber(n)){
//         cout<<n<<" is an armstrong number.";
//     }
//     else{
//         cout<<n<<" is NOT an armstrong number.";
//     }
//     return 0;
// }

// //Euclid's algorithm optimal approach of GCD(greatest common divisor)/HCF
// #include<iostream>
// using namespace std;
// int GCD(int a, int b){
//     while(a>0 && b>0){
//         if(a>b){
//             a=a%b;
//         }
//         else{
//             b=b%a;
//         }
//     }
//     if(a==0) return b;
//     return a;
// }
// int main(){
//     int a=20,b=24;
//     cout<<GCD(a,b);
//     return 0;
// }

// //LCM 
// #include<iostream>
// using namespace std;
// int gcd(int a, int b){
//     while(a>0 && b>0){
//         if(a>b){
//             a=a%b;
//         }
//         else{
//             b=b%a;
//         }
//     }
//     if(a==0) return b;
//     return a;
// }

// int lcm(int a, int b){
//     int GCD=gcd(a,b);
//     return (a*b)/GCD;
// }

// int main(){
//     int a=20,b=28;
//     cout<<lcm(a,b);
//     return 0;
// }

// //reverse integer
// #include<iostream>
// using namespace std;
// int reverseNumber(int n){
//     int rev=0;
//     while(n!=0){
//         int digit=n%10;
//         if(rev>INT16_MAX/10 || rev<INT16_MIN/10) return 0;
//         rev=(rev*10)+digit;
//         n=n/10;
//     }
//     return rev;
// }
// int main(){
//     int n=-123;
//     cout<<reverseNumber(n);
//     return 0;
// }

// //palindrome number
// #include<iostream>
// using namespace std;
// int reverseNumber(int n){
//     int rev=0;
//     while(n!=0){
//         int digit=n%10;
//         if(rev>INT16_MAX/10 || rev<INT16_MIN/10) return 0;
//         rev=(rev*10)+digit;
//         n=n/10;
//     }
//     return rev;
// }

// bool checkPlindrome(int n){
//     int rev=reverseNumber(n);
//     return rev==n;
// }

// int main(){
//     int n=-323;
//     if(checkPlindrome(n)){
//         cout<<n<<" is plindrome.";
//     }
//     else{
//         cout<<n<<" is not plindrome.";
//     }
//     return 0;
// }

