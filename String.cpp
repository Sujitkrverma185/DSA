// //permutation in string of given string.
// // s1="ab" s2="eidaooo"
// #include<iostream>
// #include<string>
// using namespace std;

// bool isFreqSame(int freq1[],int freq2[]){
//     for(int i=0; i<26; i++){
//         if(freq1[i]!=freq2[i]){
//             return false;
//         }
//     }
//     return true;
// }

// bool checkInclusion(string s1, string s2){
//     int freq[26]={0};
//     for(int i=0; i<s1.length(); i++){
//         freq[s1[i]-'a']++;
//     }

//     int windSize=s1.length();
//     for(int i=0; i<s2.length();i++){
//         int windIdx=0,idx=i;
//         int windFreq[26]={0};
//         while(windIdx<windSize && idx<s2.length()){
//             windFreq[s2[idx]-'a']++;
//             windIdx++;
//             idx++;
//         }
//         if(isFreqSame(freq,windFreq)){
//             return true;
//         }
//     }
//     return false;
// }


// int main(){
//     string s1="ab";
//     string s2="eidbaooo";
//     if(checkInclusion(s1,s2)){
//         cout<<"permutaion found\n";
//     }else{
//         cout<<"not found any permutation\n";
//     }
//     return 0;
// }

//reverse word of string 
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

string reverseString(string s){
    int n=s.length();
    string ans="";
    reverse(s.begin(),s.end());
    for(int i=0; i<n; i++){
        string word="";
        while(i<n && s[i]!=' '){
            word+=s[i];
            i++;
        }
        reverse(word.begin(),word.end());
        if(word.length()>0){
            ans+=" "+word;
        }
    }
    return ans.substr(1);
}

int main(){
    string s="the pen";
    cout<<reverseString(s);
    return 0;
}