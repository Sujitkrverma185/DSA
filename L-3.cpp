#include<iostream>
using namespace std;
int main(){

    //condition satement
    //check a number is positive or not
    int n;
    cout<<"Enter a number:";
    cin>>n;

    if(n>=0){
        cout<<n<<" is positive number \n";
    }else{
        cout<<n<<" is negative number\n";
    }

    //check age is grater then 18 or not for vote
    int age = n;
    if(age >= 18){
        cout<<"allowed for vote\n";
    }else{
        cout<<"NOt allowed for vote\n";
    }

    //check number is odd or even
    if(n%2==0){
        cout<<n<<" is even number\n";
    }else{
        cout<<n<<" is odd number\n";
    }

    //check marks and show grade
    int marks;
    cout<<"Enter your marks:";
    cin>>marks;
    if(marks>=90){
        cout<<"A grade\n";
    }
    else if(marks<90 && marks>=80){
        cout<<"B grade\n";
    }
    else if(marks<80 && marks>=70){
        cout<<"c grade\n";
    }else{
        cout<<"D grade\n";
    }

    //find a character is lowwer case or upper case
    char ch;
    cout<<"Enter a character :";
    cin>>ch;
    if(ch>='A' && ch<='Z'){
        cout<<"Upper case character\n";
    }else{
        cout<<"Lowwer case character\n";
    }
    
    //ternary satement
    cout<<(n>=0 ? "positive\n" : "negative\n");

    //while loop
    //print number 1 to 5
    int n2=5;
    int i = 1;
    while(n2>=i){
        cout<<i<<" ";
        i=i+1;
    }
    cout<<endl;
    
    
    //for loop 
    // print number 1 to n
    int n3 = 10;
    for(int i=1; i<=n3; i++){
        cout<<i<<" ";
    }
    cout<<endl;

    //sum of numbers from 1 to n
    int sum2=0;
    for(int i=1; i<=n; i++){
        sum2+=i;
    }
    cout<<sum2<<endl;

    //sum of all odd numbers from 1 to N
    int sum3=0;
    for(int i = 1; i<=n2; i++){
        if(i%2==1){
            sum3+=i;
        }
    }
    cout<<"Odd sum = "<<sum3<<endl;

    //check if a number is prime or not
    int n6=n;
    bool istrue = true;
    for(int i=2; i*i<=n6; i++){  //optimizing condition i<=n6-1
        if(n%i==0){
            istrue = false;
            break;
        }
    }
    if(istrue == true){
        cout<<"prime no\n";
    }
    else{
        cout<<"not prime no\n";
    }

    //print 5*5 star pattern
    int n7=5;
    for(int i=0; i<n7; i++){
        for(int j=0; j<n7; j++){
            cout<<" * ";
        }
    }
    cout<<endl;


}