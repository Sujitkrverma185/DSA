#include<iostream>
using namespace std;
int main(){

    //variable with datatype
    int age = 18;
    char grade = 'A';
    float PI = 3.14;
    double SI = 42.555;
    bool istrue = true;

    cout<<"age="<<age<<endl;
    cout<<"grade="<<grade<<endl;
    cout<<"Pi="<<PI<<endl;
    cout<<"SI="<<SI<<endl;
    cout<<"istrue="<<istrue<<endl;

    //type casting
    int value = grade;
    cout<<value<<endl; //A=65

    int value2=PI;
    cout<<value2<<endl; //3
    
    //operator with type casting
    float a,b;
    cout<<"enter a value: ";
    cin>>a;
    cout<<"enter a second value: ";
    cin>>b;

    cout<<"sum="<<(a+b)<<endl;
    cout<<"subtract="<<(a-b)<<endl;
    cout<<"multiply="<<(a*b)<<endl;
    cout<<"divide="<<(a/b)<<endl;
    cout<<"remender="<<((int)a % (int)b)<<endl;

    //relational operater
    cout<<"a>b:"<<(a>b)<<endl; //false(0)
    cout<<"a<b:"<<(a<b)<<endl; //false(0)
    cout<<"a<=b:"<<(a<=b)<<endl;  //true(1)
    cout<<"a>=b:"<<(a>=b)<<endl;  //1
    cout<<"a==b:"<<(a==b)<<endl;  //1
    cout<<"a!=b:"<<(a!=b)<<endl;  //0

    //logical operator
    cout<<((a>b || b<a))<<endl; //true(1) //T T = T //T F = T
    cout<<((a>b && b<a))<<endl; //T F = F
    cout<<(!(a>b))<<endl; //T->F

    //sum of 2 number
    int sum = a + b;
    cout<<"sum="<<sum<<endl;

    //unary operator
    int c = 10;
    int d = c++; //d = 10 then c=11 // work, update
    int e = ++c; //e = 12 //update,work
    int f = c--; //f = 12 then c = 11
    int g = --c; // g = 10

    cout<<"c="<<c<<endl;
    cout<<"d="<<d<<endl;
    cout<<"e="<<e<<endl;
    cout<<"f="<<f<<endl;
    cout<<"g="<<g<<endl;
}
