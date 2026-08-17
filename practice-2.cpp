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
// #include<iostream>
// using namespace std;
// int main(){
//     int n=11;
//     bool isPrime = true;
//     for(int i=2; i<=n-1; i++){
//         if(n%i==0){
//             isPrime = false;
//         }
//     }
//     if(isPrime==true){
//         cout<<n<<" is prime no."<<endl;
//     }
//     else{
//         cout<<n<<" is not prime no."<<endl;
//     }
//     return 0;
// }

// // * * * * * 
// // * * * * *
// // * * * * *
// // * * * * *
// // * * * * *
// #include<iostream>
// using namespace std;
// int main(){
//     int n=5;
//     for(int i=0; i<n; i++){
//         for(int j=0; j<n; j++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

//sum of all numbers from 1 to N which are divisible by 3.
// #include<iostream>
// using namespace std;
// int main(){
//     int n=9; 
//     int sum=0;
//     for(int i=1; i<=n; i++){
//         if(i%3==0){
//             sum+=i;
//         }
//     }
//     cout<<"sum="<<sum;
//     return 0;
// }

//print factorial of a number N.
// #include<iostream>
// using namespace std;
// int main(){
//     int n=5;
//     int fact=1;
//     for(int i=1; i<=n; i++){
//         fact*=i;
//     }
//     cout<<"fact="<<fact;
//     return 0;
// }

// * 
// * *
// * * *
// * * * *
// * * * * *
// #include<iostream>
// using namespace std;
// int main(){
//     int n=5;
//     for(int i=0; i<n; i++){
//         for(int j=0; j<i+1; j++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }



// // 1
// // 12
// // 123
// // 1234
// // 12345
// #include<iostream>
// using namespace std;
// int main(){
//     int n=5;
//     for(int i=0; i<n; i++){
//         int num = 1;
//         for(int j=0; j<i+1; j++){
//             cout<<num;
//             num++;
//         }
//         cout<<endl;
//     }
// }

// // 1
// // 22
// // 333
// // 4444
// #include<iostream>
// using namespace std;
// int main(){
//     int n=4;
//     for(int i=0; i<n; i++){
//         for(int j=0; j<i+1; j++){
//             cout<<i+1;
//         }
//         cout<<endl;
//     }
// }

// // * * * * * 
// // * * * *
// // * * *
// // * *
// // *
// #include<iostream>
// using namespace std;
// int main(){
//     int n=5;
//     for(int i=0; i<n; i++){
//         for(int j=n-i; j>0; j--){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// // 12345
// // 1234
// // 123
// // 12
// // 1
// #include<iostream>
// using namespace std;
// int main(){
//     int n=5;
//     for(int i=0; i<n; i++){
//         int num=1;
//         for(int j=n-i; j>0;j--){
//             cout<<num;
//             num++;
//         }
//         cout<<endl;
//     }
// }


// //     *
// //    ***
// //   *****
// //  *******
// // *********
// #include<iostream>
// using namespace std;
// int main(){
//     int n=5;
//     for(int i=0; i<n;i++){
//         for(int j=n-i-1; j>0; j--){
//             cout<<" ";
//         }
//         for(int j=0; j<i+1;j++){
//             cout<<"*";
//         }
//         for(int j=1; j<i+1;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     return 0;
// }


// // *********
// //  *******
// //   *****
// //    ***
// //     *
//  #include<iostream>
//  using namespace std;
//  int main(){
//     int n=5;
//     for(int i=0; i<n; i++){
//         for(int j=0; j<i; j++){
//             cout<<" ";
//         }
//         for(int j=n-i; j>0; j--){
//             cout<<"*";
//         }
//         for(int j=n-i-1; j>0; j--){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     return 0;
//  }


// // *
// // **
// // ***
// // ****
// // *****
// // ****
// // ***
// // **
// // *
// #include<iostream>
// using namespace std;
// int main(){
//     int n=5;
//     for(int i=0; i<n; i++){
//         for(int j=0; j<i+1; j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     for(int i=0; i<n;i++){
//         for(int j=n-i-1; j>0; j--){
//         cout<<"*";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// // 1
// // 01
// // 101
// // 0101
// // 10101
// #include<iostream>
// using namespace std;
// int main(){
//     int n=5;
//     int num=1;
//     for(int i=1; i<=n; i++){
//         for(int j=1; j<i+1; j++){
//             if((i+j)%2==0){
//                 cout<<1;
//             }
//             else{
//                 cout<<0;
//             }
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// // 1      1
// // 12    21
// // 123  321
// // 12344321
// #include<iostream>
// using namespace std;
// int main(){
//     int n=4;
//     for(int i=0; i<n; i++){
//         for(int j=1; j<=i+1; j++){
//             cout<<j;
//         }
//         for(int j=(n-i-1)*2; j>0; j--){
//             cout<<" ";
//         }
//         for(int j=i+1; j>=1; j--){
//             cout<<j;
//         }
//         cout<<endl;
//     }
// }

// // 1 
// // 2 3
// // 4 5 6
// // 7 8 9 10
// // 11 12 13 14 15
// #include<iostream>
// using namespace std;
// int main(){
//     int n=5;
//     int num=1;
//     for(int i=0; i<n; i++){
//         for(int j=0; j<i+1; j++){
//             cout<<num<<" ";
//             num++;
//         }
//         cout<<endl;
//     }
//     return 0;
// }


// // *        *
// // **      **
// // ***    ***
// // ****  ****
// // **********
// // ****  ****
// // ***    ***
// // **      **
// // *        *
// #include<iostream>
// using namespace std;
// int main (){
//     int n=5; 
//     for(int i=0; i<n; i++){
//         for(int j=0; j<i+1; j++){
//             cout<<"*";
//         }
//         for(int j=(n-i-1)*2; j>0; j--){
//             cout<<" ";
//         }
//         for(int j=0; j<i+1; j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     for(int i=1; i<n; i++){
//         for(int j=(n-i); j>0; j--){
//             cout<<"*";
//         }
//         for(int j=0; j<i*2; j++){
//             cout<<" ";
//         }
//         for(int j=(n-i); j>0; j--){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

