// //  *  *  *  *  *
// //  *  *  *  *  *
// //  *  *  *  *  *
// //  *  *  *  *  *
// //  *  *  *  *  *
// //star pattren 5*5
// #include<iostream>
// using namespace std;
// int main(){
//     int n=5;
//     for(int i=0; i<5; i++){
//         for(int j=0; j<5; j++){
//             cout<<" * ";
//         }
//         cout<<endl;
//     }
// }

// // 1
// // 2 2
// // 3 3 3
// // 4 4 4 4
// #include<iostream>
// using namespace std;
// int main(){
//     int n = 4;
//     int num = 1;
//     for(int i=0; i<n; i++){
//         for(int j=0; j<=i; j++){
//             cout<<num<<" ";
//         }
//         num++;
//         cout<<endl;
//     }
//     return 0;
// }

// // 1
// // 2 3
// // 4 5 6
// // 7 8 9 10

// #include<iostream>
// using namespace std;
// int main(){
//     int n=4;
//     int nums=1;
//     for(int i=0; i<n; i++){
//         for(int j=0; j<=i; j++){
//             cout<<nums<<" ";
//             nums++;
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// // AAAA
// //  BBB
// //   CC
// //    D
// #include<iostream>
// using namespace std;
// int main(){
//     int n=4;
//     char ch='A';
//     for(int i=0; i<n; i++){
//         for(int j=0; j<i; j++){
//             cout<<" ";
//         }
//         for(int k=0; k<(n-i); k++){
//             cout<<ch;
//         }
//         ch++;
//         cout<<endl;
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int sumOfDigit(int n){
//     int sum=0;
//     while(n>0){
//         int rem=n%10;
//         sum+=rem;
//         n/=10;
//     }
//     return sum;

// }

// int main(){
//     cout<<"sum = "<<sumOfDigit(145)<<endl;
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int factorial(int n){
//     int fact=1;
//     for(int i=1; i<=n; i++){
//         fact*=i;
//     }
//     return fact;
// }

// int nCr(int n, int r){
//     int fact_n = factorial(n);
//     int fact_r = factorial(r);
//     int fact_nmr = factorial(n-r);
//     return fact_n/(fact_r*fact_nmr);

// }

// int main(){
//     cout<<"nCr="<<nCr(6,1 )<<endl;
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int primeNumber(int n){
//     bool isPrime= true;
//     for(int i=2; i<=n-1; i++){
//         if(n%i==0){
//             isPrime = false;
//         }
//     }
//     return isPrime;
// }

// int main(){
//     int n=7;
//     if(primeNumber(n) == true ){
//         cout<<"prime number";
//     }
//     else{
//         cout<<"not prime";
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;

// void PrimeNumber(int n){
//     for(int i=2; i<=n; i++){
//         if(i%2==0){
//             cout<<i<<" is not a prime no.\n";
//         }
//         else{
//             cout<<i<<" is prime no.\n";
//         }
//     }
// }

// int main(){
//     int n=13;
//     PrimeNumber(n);
//     return 0;
// }

// #include<iostream>
// using namespace std;

// void fibonacci(int n){
//     int a = 0, b = 1;

//     for(int i = 1; i <= n; i++){
//         cout << a << " ";
//         int c = a + b;
//         a = b;
//         b = c;
//     }
// }

// int main(){
//     int n = 7;

//     fibonacci(n);

//     return 0;
// }


// // *      *
// // **    **
// // ***  ***
// // ********
// // ********
// // ***  ***
// // **    **
// // *      *
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n = 4;
//     // top
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < i+1; j++)  //star 1
//         {
//             cout << "*";
//         }
//         for (int j = 0; j < (n - i - 1) * 2; j++) //space
//         {
//             cout << " ";
//         }

//         for (int j = 0; j < i+1; j++) //star 2
//         {
//             cout << "*";
//         }
//         cout << endl;
//     }
//     // buttom
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n - i; j++)  //star 1
//         {
//             cout << "*";
//         }
//         for (int j = 0; j < (i * 2); j++) //space
//         {
//             cout << " ";
//         }
//         for (int j = 0; j < n - i; j++) //star 2
//         {
//             cout << "*";
//         }
//         cout << endl;
//     }

//     return 0;
// }

