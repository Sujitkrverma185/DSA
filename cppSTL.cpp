//vector

#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>vec;

    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.emplace_back(4);
    vec.pop_back();
    cout<<vec.capacity()<<endl;
    for(int val:vec){
        cout<<val<<" ";
    }
    cout<<endl;
    cout<<"front "<<vec.front()<<endl;
    cout<<"back "<<vec.back()<<endl;
}